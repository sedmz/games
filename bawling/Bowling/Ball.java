package Bowling;

import java.util.Scanner;

public class Ball {
	Scanner scanner = new Scanner(System.in);
	int pin[] = new int[10];

	// 공 굴리기
	int roll(int numOfpin, int level) {

		crush(level);

		// 쓰러진 핀의 개수
		int cnt = 0;
		for (int i = 0; i < numOfpin; i++) {
			if (pin[i] == 0)
				cnt++;
		}

		System.out.print(cnt + "개가 쓰러졌습니다.");
		scanner.nextLine();

		return cnt;
	}

	// 핀을 쓰러뜨림, 0은 쓰러짐을 의미
	public void crush(int level) {
		if (level == 3) {
			pin[0] = (int) (Math.random() * 10) % 1;
			pin[1] = (int) (Math.random() * 10) % 2;
			pin[2] = (int) (Math.random() * 10) % 1;
			pin[3] = (int) (Math.random() * 10) % 1;
			pin[4] = (int) (Math.random() * 10) % 1;
			pin[5] = (int) (Math.random() * 10) % 1;
			pin[6] = (int) (Math.random() * 10) % 1;
			pin[7] = (int) (Math.random() * 10) % 1;
			pin[8] = (int) (Math.random() * 10) % 1;
			pin[9] = (int) (Math.random() * 10) % 1;
		} else if (level == 2) {
			pin[0] = (int) (Math.random() * 10) % 2;
			pin[1] = (int) (Math.random() * 10) % 2;
			pin[2] = (int) (Math.random() * 10) % 1;
			pin[3] = (int) (Math.random() * 10) % 1;
			pin[4] = (int) (Math.random() * 10) % 1;
			pin[5] = (int) (Math.random() * 10) % 1;
			pin[6] = (int) (Math.random() * 10) % 1;
			pin[7] = (int) (Math.random() * 10) % 1;
			pin[8] = (int) (Math.random() * 10) % 1;
			pin[9] = (int) (Math.random() * 10) % 1;
		} else if (level == 1) {
			pin[0] = (int) (Math.random() * 10) % 3;
			pin[1] = (int) (Math.random() * 10) % 3;
			pin[2] = (int) (Math.random() * 10) % 2;
			pin[3] = (int) (Math.random() * 10) % 2;
			pin[4] = (int) (Math.random() * 10) % 2;
			pin[5] = (int) (Math.random() * 10) % 2;
			pin[6] = (int) (Math.random() * 10) % 1;
			pin[7] = (int) (Math.random() * 10) % 1;
			pin[8] = (int) (Math.random() * 10) % 1;
			pin[9] = (int) (Math.random() * 10) % 1;

		}
	}
}