
public class Mal {
	private int x, y; // 7x7 ��� ��ǥ
	private boolean isStart; // ������� �������� ����
	private boolean isFinish;

	Mal() {
		this.x = 3;
		this.y = -3;
		isFinish = false;
		isStart = false;
	}

	// �̵�
	public boolean move(int n) {
		// ����
		if (n == -1) {
			if (isStart == false) {
				x = 3;
				y = -3;
				isStart = true;
			} else if (x == 3 && y != -3) {
				y--;
				if (y == 0)
					y--;
			} else if (y == -3 && x != -3) {
				x--;
				if (x == 0)
					y--;
			} else if (x == -3 && y != 3) {
				y++;
				if (y == 0)
					y++;
			} else if (y == 3 && x != 3) {
				x++;
				if (x == 0)
					x++;
			} else if (x == y) {
				x++;
				y++;
			} else if (x == y * -1) {
				x--;
				y++;
			}
		}
		// ���� �밢��
		else if (x == y * -1 && isStart == true) {
			for (int i = 0; i < n; i++) {
				x++;
				y--;

				// ����
				if (x == 4) {
					isFinish = true;
					return true;
				}
			}
		}
		// ������ �밢��
		else if (x == y && x != -3) {
			for (int i = 0; i < n; i++) {
				if (y == -3) {
					x++;
					if (x == 0)
						x++;
				} else {
					x--;
					y--;
				}
			}
		}
		// �簢�� �׵θ�
		else {
			for (int i = 0; i < n; i++) {
				if (x == 3) {
					if (y == -3 && isStart == true)
						x++;
					else if (y == 3)
						x--;
					else
						y++;
				} else if (y == 3) {
					if (x == -3)
						y--;
					else
						x--;
				} else if (x == -3) {
					if (y == -3)
						x++;
					else
						y--;
				} else if (y == -3) {
					x++;
				}

				// 0�� ������ ��� �� �� �� ����
				if ((x == 0 && y != 0) || (x != 0 && y == 0)) {
					i--;
				}

				// ����
				if (x == 4) {
					isFinish = true;
					return true;
				}
			}
		}
		isStart = true;
		return false;
	}

	// �� ���� ���
	public void show() {
		if (isFinish == true)
			System.out.print("GOAL! ");
		else if (x == 3 && y == -3 && isStart == false)
			System.out.print("Ready ");
		else
			System.out.print("(" + x + "," + y + ") ");
	}

	// ���������� ���ư��Ŷ�
	public void setReady() {
		isStart = false;
		this.x = 3;
		this.y = -3;
	}

	public int getX() {
		return x;
	}

	public int getY() {
		return y;
	}

	public boolean getIsStart() {
		return isStart;
	}

	public boolean getIsFinish() {
		return isFinish;
	}

}