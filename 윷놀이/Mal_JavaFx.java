
// 국이 GUI에 맞춘 Mal 클래스
public class Mal_JavaFx {
	private int x, y; // 7x7 행렬 좌표
	private boolean isStart; // 출발지과 도착지의 구분
	private boolean isFinish;

	Mal_JavaFx() {
		this.x = 550;
		this.y = 550;
		isFinish = false;
		isStart = false;
	}

	// 이동
	public boolean move(int n) {
		// 빽도
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
		// 왼쪽 대각선
		else if (x == y && isStart == true) {
			for (int i = 0; i < n; i++) {
				x += 80;
				y += 80;

				if (x == 210 || x == 300) {
					x += 10;
					y += 10;
				}

				// 골인
				if (x == 550) {
					isFinish = true;
					return true;
				}
			}
		}
		// 오른쪽 대각선
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
		// 사각형 테두리
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

				// 골인
				if (x > 550) {
					isFinish = true;
					return true;
				}
			}
		}
		isStart = true;
		return false;
	}

	// 시작점으로 돌아가거라
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