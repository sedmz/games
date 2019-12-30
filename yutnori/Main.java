public class Main {
	public static void main(String[] args) {
		PlayGame playgame;
		do {
			playgame = new PlayGame();
			playgame.run();

		} while (playgame.finish() == true);
	}
}