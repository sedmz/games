package Bowling;

import java.util.Scanner;

public class Frame {
	Scanner scanner;
	static Ball ball;
	static final int PIN = 10;
	int point1, point2; // ���� ����
	int total; // ���� �����ӱ����� ����
	boolean isSpair = false;
	boolean isStrike = false;

	Frame() {
		scanner = new Scanner(System.in);
		ball = new Ball();
	}

	// ù��° ��
	public int run1(int level) {
		point1 = ball.roll(PIN, level);
		return point1;
	}

	// �ι�° ��
	public int run2(int level) {
		point2 = ball.roll(PIN - point1, level);
		return point2;
	}

	// ���� ������ ����
	public int calculate() {
		if (point1 == 10)
			isStrike = true;
		else if (point1 + point2 == 10)
			isSpair = true;

		return point1 + point2;
	}

	// ������ �ջ�
	public void addTotal(int total) {
		this.total += total;
	}

	// �����ǿ� ������ ����
	void showPoint1() {
		if (isStrike == true)
			System.out.print(" X ");
		else
			System.out.print(point1 + " ");
	}

	// �����ǿ� ������ ����
	void showPoint2() {
		if (isStrike == true)
			System.out.print("");
		else if (isSpair == true)
			System.out.print("\\");
		else
			System.out.print(point2 + " ");
	}

	int getPoint1() {
		return point1;
	}

	int getPoint2() {
		return point2;
	}

	int getTotal() {
		return total;
	}

	boolean getisSpair() {
		return isSpair;
	}

	boolean getisStrike() {
		return isStrike;
	}
}