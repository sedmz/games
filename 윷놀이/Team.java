public class Team {
	private String name; // ����
	private Mal[] mal;
	private boolean arr[][]; // ������ ���� ����

	public Team(String name, int numOfmal) {
		this.name = name;

		mal = new Mal[numOfmal];
		for (int i = 0; i < mal.length; i++)
			mal[i] = new Mal();

		// ������ ���� ���踦 �ʱ�ȭ
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

	// �̵�
	public boolean move(int nMal, int nDice) {
		boolean b = false;
		// �ش� ���� ���� ������ �̵�
		for (int i = 0; i < arr.length; i++) {
			if (arr[nMal][i] == true) {
				b = mal[i].move(nDice);
			}
		}

		group(nMal, mal[nMal].getX(), mal[nMal].getY()); // ����
		return b;
	}

	// ����
	public void group(int nMal, int x, int y) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[nMal][i] == false) { // ���� �� ������
				if (mal[i].getX() == x && mal[i].getY() == y) { // ������ ��ǥ�� �ְ�
					if (mal[nMal].getIsFinish() == false && mal[i].getIsStart() == true) { // �������� ���̶��
						arr[nMal][i] = true;
						arr[i][nMal] = true;
						System.out.println(i + "��° ���� ��������");
					}
				}
			}
		}
	}

	// �� ��ġ ǥ��
	public void show(int i) {
		mal[i].show();
	}

	// ���������� ����
	public void setReady(int i) {
		mal[i].setReady();
	}

	// ���� ���� ����
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