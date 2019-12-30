import java.util.Scanner;

public class PlayGame {
	private Scanner scanner;
	private Team[] team;

	public PlayGame() {
		scanner = new Scanner(System.in);

		System.out.print("팀 수 입력 >> ");
		team = new Team[scanner.nextInt()];

		System.out.print("말의 개수 입력 >> ");
		int nMal = scanner.nextInt();

		for (int i = 0; i < team.length; i++) {
			System.out.print(i + 1 + "번째 팀의 이름 입력 >> ");
			team[i] = new Team(scanner.next(), nMal);
		}
	}

	// 말 위치 표시
	public void show() {
		System.out.println("");
		for (int i = 0; i < team.length; i++) {
			for (int j = 0; j < team[i].numOfmal(); j++) {
				System.out.print(team[i].getName() + "팀의 " + j + "번째 말 >> ");
				team[i].show(j);
			}
			System.out.println("");
		}
		System.out.println("");
	}

	// 실행
	public void run() {
		boolean isAgain = false;
		System.out.println("게임을 시작합니다.");

		while (true) {
			for (int i = 0; i < team.length; i++) {
				do {
					// 위치 정보 표시, GUI
					show();

					// 윷 던지기
					int nDice = roll(i);
					int nMal = choose();

					// -1을 입력할 경우, 윷 직접 지정
					if (nMal == -1) {
						nDice = setDirect();
						nMal = choose();
					}

					// 말의 이동
					if (team[i].move(nMal, nDice) == true)
						System.out.println("GOAL IN ~");

					// 말 잡기
					isAgain = capture(team[i].getMal(nMal), i);

					// 우승 여부
					if (win(i) == true)
						return;

					// 윷이나 모가 나왔을 경우 한 번 더
					if (nDice == 4 || nDice == 5) {
						System.out.println("윷이랑 모가 나왔네 한번더~~~");
						isAgain = true;
					}

				} while (isAgain == true);
			}
		}
	}

	// 윷 직접 지정
	public int setDirect() {
		System.out.print("얼만큼 이동할까유 >> ");
		return scanner.nextInt();
	}

	// 이동할 말
	public int choose() {
		System.out.print("이동할 말을 선택하십시오 >> ");
		return scanner.nextInt();

	}

	// 윷 던지기
	public int roll(int i) {
		System.out.print(team[i].getName() + "팀이 윷을 던집니다. ");
		return Dice.dice();

	}

	// 우승 여부
	public boolean win(int i) {
		for (int j = 0; j <= team[i].numOfmal(); j++) {
			if (team[i].numOfmal() == j) {
				System.out.println(team[i].getName() + "팀 우승!♥");
				return true;
			} else if (team[i].getIsFinish(j) == false)
				break;
		}
		return false;
	}

	// 다른 팀 말 잡기
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
							System.out.println(team[k].getName() + "팀의 " + i + "번째 말을 잡았지렁 ㅎㅎ");

							// 업은 말들 초기화
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
			System.out.println("말을 잡았으니까 한번 더하슈");
		return b;

	}

	// 게임 끝
	public boolean finish() {
		System.out.println("");
		System.out.print("재시작 0, 종료는 1 >> ");
		int n = scanner.nextInt();
		if (n == 0)
			return true;
		else
			return false;
	}
}