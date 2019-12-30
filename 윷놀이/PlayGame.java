import java.util.Scanner;

public class PlayGame {
	private Scanner scanner;
	private Team[] team;

	public PlayGame() {
		scanner = new Scanner(System.in);

		System.out.print("�� �� �Է� >> ");
		team = new Team[scanner.nextInt()];

		System.out.print("���� ���� �Է� >> ");
		int nMal = scanner.nextInt();

		for (int i = 0; i < team.length; i++) {
			System.out.print(i + 1 + "��° ���� �̸� �Է� >> ");
			team[i] = new Team(scanner.next(), nMal);
		}
	}

	// �� ��ġ ǥ��
	public void show() {
		System.out.println("");
		for (int i = 0; i < team.length; i++) {
			for (int j = 0; j < team[i].numOfmal(); j++) {
				System.out.print(team[i].getName() + "���� " + j + "��° �� >> ");
				team[i].show(j);
			}
			System.out.println("");
		}
		System.out.println("");
	}

	// ����
	public void run() {
		boolean isAgain = false;
		System.out.println("������ �����մϴ�.");

		while (true) {
			for (int i = 0; i < team.length; i++) {
				do {
					// ��ġ ���� ǥ��, GUI
					show();

					// �� ������
					int nDice = roll(i);
					int nMal = choose();

					// -1�� �Է��� ���, �� ���� ����
					if (nMal == -1) {
						nDice = setDirect();
						nMal = choose();
					}

					// ���� �̵�
					if (team[i].move(nMal, nDice) == true)
						System.out.println("GOAL IN ~");

					// �� ���
					isAgain = capture(team[i].getMal(nMal), i);

					// ��� ����
					if (win(i) == true)
						return;

					// ���̳� �� ������ ��� �� �� ��
					if (nDice == 4 || nDice == 5) {
						System.out.println("���̶� �� ���Գ� �ѹ���~~~");
						isAgain = true;
					}

				} while (isAgain == true);
			}
		}
	}

	// �� ���� ����
	public int setDirect() {
		System.out.print("��ŭ �̵��ұ��� >> ");
		return scanner.nextInt();
	}

	// �̵��� ��
	public int choose() {
		System.out.print("�̵��� ���� �����Ͻʽÿ� >> ");
		return scanner.nextInt();

	}

	// �� ������
	public int roll(int i) {
		System.out.print(team[i].getName() + "���� ���� �����ϴ�. ");
		return Dice.dice();

	}

	// ��� ����
	public boolean win(int i) {
		for (int j = 0; j <= team[i].numOfmal(); j++) {
			if (team[i].numOfmal() == j) {
				System.out.println(team[i].getName() + "�� ���!��");
				return true;
			} else if (team[i].getIsFinish(j) == false)
				break;
		}
		return false;
	}

	// �ٸ� �� �� ���
	public boolean capture(Mal mal, int nTeam) {

		boolean b = false;

		for (int k = 0; k < team.length; k++) {
			if (k != nTeam) {
				for (int i = 0; i < team[k].numOfmal(); i++) {
					int x = team[k].getX(i);
					int y = team[k].getY(i);

					if (mal.getX() == x && mal.getY() == y) {
						if (team[k].getIsStart(i) == true && team[k].getIsFinish(i) == false) {
							b = true;
							team[k].setReady(i);
							System.out.println(team[k].getName() + "���� " + i + "��° ���� ������� ����");

							// ���� ���� �ʱ�ȭ
							for (int j = 0; j < team[k].numOfmal(); j++) {
								team[k].setArr(i, j, false);
							}
							team[k].setArr(i, i, true);
						}
					}
				}
			}
		}
		if (b == true)
			System.out.println("���� ������ϱ� �ѹ� ���Ͻ�");
		return b;

	}

	// ���� ��
	public boolean finish() {
		System.out.println("");
		System.out.print("����� 0, ����� 1 >> ");
		int n = scanner.nextInt();
		if (n == 0)
			return true;
		else
			return false;
	}
}