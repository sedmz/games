public class Team {
	private String name; // 팀명
	private Mal[] mal;
	private boolean arr[][]; // 말들의 업힌 관계

	public Team(String name, int numOfmal) {
		this.name = name;

		mal = new Mal[numOfmal];
		for (int i = 0; i < mal.length; i++)
			mal[i] = new Mal();

		// 말들의 업힌 관계를 초기화
		arr = new boolean[numOfmal][numOfmal];
		for (int i = 0; i < numOfmal; i++) {
			for (int j = 0; j < numOfmal; j++) {
				if (i == j)
					arr[i][j] = true;
				else
					arr[i][j] = false;
			}
		}
	}

	// 이동
	public boolean move(int nMal, int nDice) {
		boolean b = false;
		// 해당 말과 업힌 말들의 이동
		for (int i = 0; i < arr.length; i++) {
			if (arr[nMal][i] == true) {
				b = mal[i].move(nDice);
			}
		}

		group(nMal, mal[nMal].getX(), mal[nMal].getY()); // 업기
		return b;
	}

	// 업기
	public void group(int nMal, int x, int y) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[nMal][i] == false) { // 아직 안 업혔고
				if (mal[i].getX() == x && mal[i].getY() == y) { // 동일한 좌표에 있고
					if (mal[nMal].getIsFinish() == false && mal[i].getIsStart() == true) { // 진행중인 말이라면
						arr[nMal][i] = true;
						arr[i][nMal] = true;
						System.out.println(i + "번째 말을 업었군용");
					}
				}
			}
		}
	}

	// 말 위치 표시
	public void show(int i) {
		mal[i].show();
	}

	// 시작점으로 가라
	public void setReady(int i) {
		mal[i].setReady();
	}

	// 업힌 정보 설정
	public void setArr(int i, int j, boolean b) {
		arr[i][j] = b;
	}

	public int numOfmal() {
		return mal.length;
	}

	public Mal getMal(int i) {
		return mal[i];
	}

	public String getName() {
		return name;
	}

	public int getX(int i) {
		return mal[i].getX();
	}

	public int getY(int i) {
		return mal[i].getY();
	}

	public boolean getIsFinish(int i) {
		return mal[i].getIsFinish();
	}

	public boolean getIsStart(int i) {
		return mal[i].getIsStart();
	}

}