package Bowling;

import java.util.Scanner;

public class Bowling {
	Scanner scanner;
	Player player[];
	static final int NUM_OF_FRAME = 10;

	Bowling() {
		scanner = new Scanner(System.in);
		player = new Player[2]; // �� ���� �÷��̾�

		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("          �ۡ�Bowling Game�ܡ�");
		System.out.println("              [Enter]");
		scanner.nextLine();
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");

		// ���� �Է�
		System.out.println("[LEVEL INPUT 1:�� 2:�� 3:߾]");
		for (int i = 0; i < player.length; i++) {
			System.out.print("player" + (i + 1) + " >> ");
			player[i] = new Player(NUM_OF_FRAME, scanner.nextInt());
		}

		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("player1 vs player2");
		System.out.println("    Game Start!");
		System.out.println("     [Enter]");
		scanner.nextLine();
		scanner.nextLine();
	}

	// ���� ����
	public void run() {
		for (int i = 0; i < NUM_OF_FRAME; i++) {
			for (int j = 0; j < player.length; j++) {

				show();
				System.out.println("");
				System.out.println("");
				System.out.println("�ۡ�Player" + (j + 1) + "�� ���ʡܡ�");

				// �� ������
				if (player[j].run1(i) != 10) {
					show();
					System.out.println("");
					System.out.println("");
					System.out.println("�ۡ�Player" + (j + 1) + "�� ���ʡܡ�");
					player[j].run2(i);
				}
				// ���� �ջ�
				int strikeOrSpair = player[j].calculate(i);

				// ������ ���� ���
				if (i == NUM_OF_FRAME - 1) {
					// Strike, ù��° ��ȸ �߰�
					if (strikeOrSpair == 1) {
						show();
						System.out.println("");
						System.out.println("");
						System.out.println("�ۡ�Player" + (j + 1) + "�� ���ʡܡ�");

						// ��������
						if (player[j].run1(++i) != 10) {
							show();
							System.out.println("");
							System.out.println("");
							System.out.println("�ۡ�Player" + (j + 1) + "�� ���ʡܡ�");
							player[j].run2(i);
						}
						strikeOrSpair = player[j].calculate(i);

						if (strikeOrSpair == 1) {
							// Strike, �ι�° ��ȸ �߰�
							show();
							System.out.println("");
							System.out.println("");
							System.out.println("�ۡ�Player" + (j + 1) + "�� ���ʡܡ�");
							player[j].run1(++i);
							player[j].calculate(i);
						}

					}
					// Spair, ù��° ��ȸ �߰�
					else if (strikeOrSpair == 0) {
						show();
						System.out.println("");
						System.out.println("");
						System.out.println("�ۡ�Player" + (j + 1) + "�� ���ʡܡ�");
						player[j].run1(++i);
						player[j].calculate(i);
					}
					// ���󺹱�
					i = 9;
				}
			}
		}

		whoWin();
	}

	public void show() {
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		for (int i = 0; i < player.length; i++) {
			player[i].show(i + 1);
		}
	}

	public void whoWin() {
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");
		System.out.println("\n\n\n\n\n\n\n\n\n\n");

		int totalPlayer1 = player[0].frame[NUM_OF_FRAME - 1].getTotal();
		int totalPlayer2 = player[1].frame[NUM_OF_FRAME - 1].getTotal();

		System.out.println("\t �ۡ� �� �� �� �� �ܡ�");
		System.out.println("\t player1 : " + totalPlayer1);
		System.out.println("\t player2 : " + totalPlayer2);
		System.out.println("");
		System.out.print("\t");
		
		if (totalPlayer1 > totalPlayer2)
			System.out.println(" player1 WIN!");
		else if (totalPlayer1 == totalPlayer2)
			System.out.println(" ���º�");
		else
			System.out.println(" player2 WIN!");
		System.out.println("");
	}
}