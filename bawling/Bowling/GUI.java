package Bowling;

// 포기한 GUI
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class GUI extends JFrame implements ActionListener {
	JPanel scorePanel, explainPanel;
	JPanel playerPanel[] = new JPanel[2];
	JPanel framePanel[] = new JPanel[12];
	JLabel first, second, total;
	JLabel player1, player2, explain;
	JButton button;

	public GUI() {
		super("Bowling Game");
		getContentPane().setLayout(new BorderLayout());

		// 점수판
		scorePanel = new JPanel(new GridLayout(2, 1, 2, 2));

		playerPanel[0] = new JPanel(new GridLayout(1, 11));
		playerPanel[1] = new JPanel(new GridLayout(1, 11));
		playerPanel[0].setBackground(Color.CYAN);
		playerPanel[1].setBackground(Color.BLUE);

		// 스코어
		JPanel tmp = new JPanel(new GridLayout(1, 2));
		tmp.add(new JLabel("hi",Label.LEFT));
		tmp.add(new JLabel("hi",Label.LEFT));
		
		// 프레임
		playerPanel[0].add(new Label("player1"));
		for (int i = 1; i < 11; i++) {
			framePanel[i] = new JPanel(new GridLayout(2, 1));
			framePanel[i].add(tmp);
		}
		// framePanel[1].add(new JLabel("총점"));

		playerPanel[0].add(framePanel[1]);
		playerPanel[0].add(new Label("total"));

		scorePanel.add(playerPanel[0]);
		scorePanel.add(playerPanel[1]);

		// 설명
		explainPanel = new JPanel();

		explain = new JLabel("공이 굴러감유.");

		explainPanel.add(explain);

		// 합치기
		getContentPane().add("Center", scorePanel);
		getContentPane().add("East", explainPanel);
		setVisible(true);
		setSize(1000, 700);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}

	@Override
	public void actionPerformed(ActionEvent e) {
	}

}