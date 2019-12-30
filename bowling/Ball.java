package Bowling;

import java.util.Scanner;

public class Ball {
	Scanner scanner = new Scanner(System.in);
	int pin[] = new int[10];

	// �� ������
	int roll(int numOfpin, int level) {

		crush(level);

		// ������ ���� ����
		int cnt = 0;
		for (int i = 0; i < numOfpin; i++) {
			if (pin[i] == 0)
				cnt++;
		}

		System.out.print(cnt + "���� ���������ϴ�.");
		scanner.nextLine();

		return cnt;
	}

	// ���� �����߸�, 0�� �������� �ǹ�
	public void crush(int level) {
		if (level == 3) {
			pin[0] = (int) (Math.random() * 10) % 1;
			pin[1] = (int) (Math.random() * 10) % 2;
			pin[2] = (int) (Math.random() * 10) % 1;
			pin[3] = (int) (Math.random() * 10) % 1;
			pin[4] = (int) (Math.random() * 10) % 1;
			pin[5] = (int) (Math.random() * 10) % 1;
			pin[6] = (int) (Math.random() * 10) % 1;
			pin[7] = (int) (Math.random() * 10) % 1;
			pin[8] = (int) (Math.random() * 10) % 1;
			pin[9] = (int) (Math.random() * 10) % 1;
		} else if (level == 2) {
			pin[0] = (int) (Math.random() * 10) % 2;
			pin[1] = (int) (Math.random() * 10) % 2;
			pin[2] = (int) (Math.random() * 10) % 1;
			pin[3] = (int) (Math.random() * 10) % 1;
			pin[4] = (int) (Math.random() * 10) % 1;
			pin[5] = (int) (Math.random() * 10) % 1;
			pin[6] = (int) (Math.random() * 10) % 1;
			pin[7] = (int) (Math.random() * 10) % 1;
			pin[8] = (int) (Math.random() * 10) % 1;
			pin[9] = (int) (Math.random() * 10) % 1;
		} else if (level == 1) {
			pin[0] = (int) (Math.random() * 10) % 3;
			pin[1] = (int) (Math.random() * 10) % 3;
			pin[2] = (int) (Math.random() * 10) % 2;
			pin[3] = (int) (Math.random() * 10) % 2;
			pin[4] = (int) (Math.random() * 10) % 2;
			pin[5] = (int) (Math.random() * 10) % 2;
			pin[6] = (int) (Math.random() * 10) % 1;
			pin[7] = (int) (Math.random() * 10) % 1;
			pin[8] = (int) (Math.random() * 10) % 1;
			pin[9] = (int) (Math.random() * 10) % 1;

		}
	}
}