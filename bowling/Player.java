package Bowling;

public class Player {
	Frame frame[];
	int level; // �÷��̾��� ����
	int point1, point2;

	Player(int NUM_OF_FRAME, int level) {
		// ���ʽ� �������� ����� �迭 ����
		frame = new Frame[NUM_OF_FRAME + 2];
		for (int i = 0; i < frame.length; i++)
			frame[i] = new Frame();

		this.level = level;
	}

	// ù ��° ��
	public int run1(int i) {
		return frame[i].run1(level);
	}

	// �� ��° ��
	public int run2(int i) {
		return frame[i].run2(level);
	}

	// ���� ���
	public int calculate(int i) {
		frame[i].addTotal(frame[i].calculate());

		if (i > 0) {
			// �����
			if (frame[i - 1].getisSpair() == true)
				frame[i - 1].addTotal(frame[i].getPoint1());
			// ��Ʈ����ũ
			else if (frame[i - 1].getisStrike() == true) {
				frame[i - 1].addTotal(frame[i].getPoint1());
				frame[i - 1].addTotal(frame[i].getPoint2());

				if (i > 1) {
					if (frame[i - 2].getisStrike() == true) {
						// ��Ű
						if (frame[i].getisStrike() == true) {
							frame[i - 2].addTotal(10);
							frame[i - 1].addTotal(10);
						}
						// ����
						else {
							frame[i - 2].addTotal(frame[i].getPoint1());
							frame[i - 1].addTotal(frame[i].getPoint1());
						}
					}
				}
			}

			// ���� ���� = ���� ���� + ���� ����
			frame[i].addTotal(frame[i - 1].getTotal());
		}

		if (frame[i].getisStrike() == true)
			return 1;
		else if (frame[i].getisSpair() == true)
			return 0;
		else
			return -1;

	}

	// ������
	public void show(int player) {
		for (int i = 0; i < 10; i++)
			System.out.print("\t   [" + (1 + i) + "]");

		System.out.println("");
		System.out.print("player" + player);
		for (int i = 0; i < 10; i++) {
			System.out.print("\t��  ");
			frame[i].showPoint1();
			frame[i].showPoint2();
		}

		System.out.println("");
		for (int i = 0; i < 10; i++)
			System.out.print("\t��  " + frame[i].getTotal());
		
		System.out.println("");
	}
}
