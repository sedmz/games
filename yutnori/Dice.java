
public class Dice {
	public static int dice() {
		int dice[] = new int[4];
		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			dice[i] = (int) ((Math.random() * 100) % 2);

			if (dice[i] == 0) // 1�� ��, 0�� �Ʒ�
				cnt++;
		}

		if (dice[0] == 0 && dice[1] == 1 && dice[2] == 1 && dice[3] == 1) {
			System.out.println("������ ���Խ��ϴ�. (�ڷ� �� ĭ)");
			return -1;
		} else if (cnt == 0) {
			System.out.println("�� ���Խ��ϴ�. (������ �ټ� ĭ)");
			return 5;
		} else if (cnt == 1) {
			System.out.println("���� ���Խ��ϴ�. (������ �� ĭ)");
			return 1;
		} else if (cnt == 2) {
			System.out.println("���� ���Խ��ϴ�. (������ �� ĭ)");
			return 2;
		} else if (cnt == 3) {
			System.out.println("���� ���Խ��ϴ�. (������ �� ĭ)");
			return 3;
		} else if (cnt == 4) {
			System.out.println("���� ���Խ��ϴ�. (������ �� ĭ)");
			return 4;
		}
		return 0;
	}
}
