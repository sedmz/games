
// ���� GUI�� ���� Mal Ŭ����
public class Mal_JavaFx {
	private int x, y; // 7x7 ��� ��ǥ
	private boolean isStart; // ������� �������� ����
	private boolean isFinish;

	Mal_JavaFx() {
		this.x = 550;
		this.y = 550;
		isFinish = false;
		isStart = false;
	}

	// �̵�
	public boolean move(int n) {
		// ����
		if (n == -1) {
			if (isStart == false) {
				x = 550;
				y = 550;
				isStart = true;
			} else if (x == 550 && y != 550) {
				y += 100;
			} else if (y == 550 && x != 50) {
				x -= 100;
			} else if (x == 50 && y != 50) {
				y -= 100;
			} else if (y == 50 && x != 550) {
				x += 100;
			} else if (x == y) {
				x -= 80;
				y -= 80;

				if (x == 390 || x == 300) {
					x -= 10;
					y -= 10;
				}
			} else if (x + y == 600) {
				x += 80;
				y -= 80;

				if (x == 300 || x == 210) {
					x += 10;
					y -= 10;
				}
			}
		}
		// ���� �밢��
		else if (x == y && isStart == true) {
			for (int i = 0; i < n; i++) {
				x += 80;
				y += 80;

				if (x == 210 || x == 300) {
					x += 10;
					y += 10;
				}

				// ����
				if (x == 550) {
					isFinish = true;
					return true;
				}
			}
		}
		// ������ �밢��
		else if (x + y == 600 && x != 50) {
			for (int i = 0; i < n; i++) {
				if (y == 550) {
					x += 100;

				} else {
					x -= 80;
					y += 80;

					if (x == 390 || x == 300) {
						x -= 10;
						y += 10;
					}
				}
			}

		}
		// �簢�� �׵θ�
		else {
			for (int i = 0; i < n; i++) {
				if (x == 550) {
					if (y == 550 && isStart == true)
						x += 100;
					else if (y == 50)
						x -= 100;
					else
						y -= 100;
				} else if (y == 50) {
					if (x == 50)
						y += 100;
					else
						x -= 100;
				} else if (x == 50) {
					if (y == 550)
						x += 100;
					else
						y += 100;
				} else if (y == 550) {
					x += 100;
				}

				// ����
				if (x > 550) {
					isFinish = true;
					return true;
				}
			}
		}
		isStart = true;
		return false;
	}

	// ���������� ���ư��Ŷ�
	public void setReady() {
		isStart = false;
		this.x = 550;
		this.y = 550;
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