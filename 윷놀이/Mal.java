
public class Mal {
	private int x, y; // 7x7 행렬 좌표
	private boolean isStart; // 출발지과 도착지의 구분
	private boolean isFinish;

	Mal() {
		this.x = 3;
		this.y = -3;
		isFinish = false;
		isStart = false;
	}

	// 이동
	public boolean move(int n) {
		// 빽도
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
		// 왼쪽 대각선
		else if (x == y * -1 && isStart == true) {
			for (int i = 0; i < n; i++) {
				x++;
				y--;

				// 골인
				if (x == 4) {
					isFinish = true;
					return true;
				}
			}
		}
		// 오른쪽 대각선
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
		// 사각형 테두리
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

				// 0에 도착할 경우 한 번 더 진행
				if ((x == 0 && y != 0) || (x != 0 && y == 0)) {
					i--;
				}

				// 골인
				if (x == 4) {
					isFinish = true;
					return true;
				}
			}
		}
		isStart = true;
		return false;
	}

	// 말 상태 출력
	public void show() {
		if (isFinish == true)
			System.out.print("GOAL! ");
		else if (x == 3 && y == -3 && isStart == false)
			System.out.print("Ready ");
		else
			System.out.print("(" + x + "," + y + ") ");
	}

	// 시작점으로 돌아가거라
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