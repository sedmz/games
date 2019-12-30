#include "project1.h"

minesweeper::minesweeper()
{
	/** ���� ȭ�� **/
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t    ������������������������������" << endl;
	cout << "\t\t    ��  Minesweeper��" << endl;
	cout << "\t\t    ������������������������������" << endl;
	cout << "\t\t    ������������������������������" << endl;
	cout << "\t\t    ��  Game Start!��" << endl;
	cout << "\t\t    ������������������������������" << endl;
	cout << "\t\t         [enter]" << endl;
	cout << "\t\t            ";
	cin.clear(); cin.ignore(256, '\n');


	/** How to play? **/
	system("cls");
	cout << endl << endl << endl << endl;
	cout << "\t                How to play?" << endl;
	cout << "\t     ����������������������������������������������������������������" << endl;
	cout << "\t     ��                              ��" << endl;
	cout << "\t     ��     MAXTRIX you think mine   ��" << endl;
	cout << "\t     ��       Input >> yes 1 1       ��" << endl;
	cout << "\t     ��                              ��" << endl;
	cout << "\t     ��   MATRIX you think not mine  ��" << endl;
	cout << "\t     ��        Input >> no 1 1       ��" << endl;
	cout << "\t     ��                              ��" << endl;
	cout << "\t     ����������������������������������������������������������������" << endl;
	cout << "\t                 [enter]" << endl;
	cout << "\t\t            ";
	cin.clear(); cin.ignore(256, '\n');


	/** ��� ���� **/
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t         ��������" << endl;
	cout << "\t\t      ��������������" << endl;
	cout << "\t\t    ����  ������  ����" << endl;
	cout << "\t\t  ����   ��������   ����" << endl;
	cout << "\t\t    ����  ������  ����" << endl;
	cout << "\t\t      ��������������" << endl;
	cout << "\t\t         ��������" << endl;
	cout << endl;
	cout << "\t ����������������������������������������������������������������������������������" << endl;
	cout << "\t �� �� Excessive game cause blurred vision��" << endl;
	cout << "\t ����������������������������������������������������������������������������������" << endl << endl;
	cout << "\t                 [enter]" << endl;
	cout << "\t\t            ";
	cin.clear(); cin.ignore(256, '\n');
	

	/** Tutorial? **/
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t     ����������������������������������������������������������������" << endl;
	cout << "\t     ��                              ��" << endl;
	cout << "\t     ��     Do you want Tutorial?    ��" << endl;
	cout << "\t     ��          YES or NO           ��" << endl;
	cout << "\t     ��                              ��" << endl;
	cout << "\t     ����������������������������������������������������������������" << endl;
	cout << "\t                 [enter]" << endl;
	cout << "\t\t           ";

	while (1)
	{
		// ����ó��
		try
		{
			cin >> str;

			if (str != "yes" && str != "YES" && str != "no" && str != "NO") throw 0;
			
			else if (str == "yes" || str == "YES")	tutorial();	
			else if (str == "no" || str == "NO")	duration = 0;
			
			break;
		}
		catch (int failCode)
		{
			cin.clear(); cin.ignore(256, '\n');
		}
	}
}
void minesweeper::tutorial()
{
	int i, j;
	makeMine();

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��             Hi :)             ��" << endl;
	cout << "\t\t\t\t\t\t��     Let's start TUTORIAL      ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n'); // ���� ����

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��  First, Let's click any matrix��" << endl;
	cout << "\t\t\t\t\t\t��         Input >> no 5 5       ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;

	while (1){
		try // no 5 5 �� �Է¹��� ������ �ݺ�
		{
			gotoxy(0, 21);
			cout << "    Input >> ";
			cin >> str >> i >> j;

			if (cin.fail() == 1) throw 0; // int���� ���ڰ� �ԷµǾ��� ��� ���
			else if (str != "NO" && str != "no") throw 1;
			else if (i != 5 || j != 5) throw 2;

			break;
		}
		catch (int failCode)
		{
			cin.clear(); cin.ignore(256, '\n');

			showcover(); gotoxy(0, 8);
			cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
			cout << "\t\t\t\t\t\t��                               ��" << endl;
			cout << "\t\t\t\t\t\t��              Error            ��" << endl;
			cout << "\t\t\t\t\t\t��         Input >> no 5 5       ��" << endl;
			cout << "\t\t\t\t\t\t��                               ��" << endl;
			cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
			}
	}

	uncover(4, 4);

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��           Excellent           ��" << endl;
	cout << "\t\t\t\t\t\t��           ~~~��~~~            ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��   Number in each matrix means ��" << endl;
	cout << "\t\t\t\t\t\t�� number of mines around them :)��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��        Then, we can guess     ��" << endl;
	cout << "\t\t\t\t\t\t��      the location of mine!    ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��    Now, Let's mark the mine   ��" << endl;
	cout << "\t\t\t\t\t\t��       Input >> yes 1 3        ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	
	while (1) {
		try // yes 1 3 �� �Է¹��� ������ �ݺ�
		{
			gotoxy(0, 21);
			cout << "    Input >> ";
			cin >> str >> i >> j;

			if (cin.fail() == 1) throw 0;
			else if (str != "YES" && str != "yes") throw 1;
			else if (i != 1 || j != 3) throw 2;

			break;
		}
		catch (int failCode)
		{
			cin.clear(); cin.ignore(256, '\n');

			showcover(); gotoxy(0, 8);
			cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
			cout << "\t\t\t\t\t\t��                               ��" << endl;
			cout << "\t\t\t\t\t\t��              Error            ��" << endl;
			cout << "\t\t\t\t\t\t��        Input >> yes 1 3       ��" << endl;
			cout << "\t\t\t\t\t\t��                               ��" << endl;
			cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
		}
	}

	uncover(0, 2);
	cnt++;

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��           Excellent           ��" << endl;
	cout << "\t\t\t\t\t\t��           ~~~��~~~            ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��  What if we click on a mine?  ��" << endl;
	cout << "\t\t\t\t\t\t��         Input >> no 1 2       ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;

	while (1) {
		try // no 1 2 �� �Է¹��� ������ �ݺ�
		{
			gotoxy(0, 21);
			cout << "    Input >> ";
			cin >> str >> i >> j;

			if (cin.fail() == 1) throw 0;
			else if (str != "no" && str != "NO") throw 1;
			else if (i != 1 || j != 2) throw 2;

			break;
		}
		catch (int failCode)
		{
			cin.clear(); cin.ignore(256, '\n');

			showcover(); gotoxy(0, 8);
			cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
			cout << "\t\t\t\t\t\t��                               ��" << endl;
			cout << "\t\t\t\t\t\t��              Error            ��" << endl;
			cout << "\t\t\t\t\t\t��        Input >> no 1 2        ��" << endl;
			cout << "\t\t\t\t\t\t��                               ��" << endl;
			cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
		}
	}

	uncover(0, 1);

	system("cls");
	showright(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��         Ooops TT^TT...        ��" << endl;
	cout << "\t\t\t\t\t\t��          Game is Over         ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n');

	system("cls");
	showright(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��          From now on,         ��" << endl;
	cout << "\t\t\t\t\t\t��   Find 9 Mines by yourself!   ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');

	system("cls");
	showright(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t��          Minesweeper          ��" << endl;
	cout << "\t\t\t\t\t\t��          Game Start!          ��" << endl;
	cout << "\t\t\t\t\t\t��                               ��" << endl;
	cout << "\t\t\t\t\t\t������������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');
	

	finish = clock();
	duration = (finish - start) / CLOCKS_PER_SEC;
}
bool minesweeper::gameMain()
{
	makeMine();					// �� ������ ����
	while (click() == true) {}  // Ŭ�� �ݺ�


	/** Score **/
	finish = clock();
	duration = (finish - start) / CLOCKS_PER_SEC;

	if (outcome == true)
	{
		if (best == -1) // ���� ����� ���� ���
			best = duration;
		else if (best > duration)
			best = duration;
	}

	gotoxy(0, 12);
	cout << "\t\t\t\t\t\t   ����������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t   ��                              ��" << endl;
	cout << "\t\t\t\t\t\t\t   time : " << duration / 60 << "��" << duration - duration / 60 * 60 << "��" << endl;
	if (best == -1)
		cout << "\t\t\t\t\t\t\t   best score : -" << endl;
	else
		cout << "\t\t\t\t\t\t\t   best score : " << (int)best / 60 << "��" << (int)best - (int)best / 60 * 60 << "��" << endl;
	cout << "\t\t\t\t\t\t   ��                              ��" << endl;
	cout << "\t\t\t\t\t\t   ����������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t               [enter]" << endl;
	cout << "\t\t\t\t\t\t\t          ";
	getchar(); cin.clear(); cin.ignore(256, '\n');


	/** Restart? **/
	gotoxy(0, 12);
	cout << "\t\t\t\t\t\t   ����������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t   ��                              ��" << endl;
	cout << "\t\t\t\t\t\t   ��      Do you want Restart?    ��" << endl;
	cout << "\t\t\t\t\t\t   ��          YES or NO           ��" << endl;
	cout << "\t\t\t\t\t\t   ��                              ��" << endl;
	cout << "\t\t\t\t\t\t   ����������������������������������������������������������������" << endl;
	cout << "\t\t\t\t\t\t               [enter]" << endl;
	cout << "\t\t\t\t\t\t\t         ";
	
	while (1)
	{
		// ����ó��
		try
		{
			cin >> str;

			if (str != "yes" && str != "YES" && str != "no" && str != "NO") throw 0;

			else if (str == "yes" || str == "YES")	return true;
			else if (str == "no" || str == "NO")	return false;

			break;
		}
		catch (int failCode)
		{
			cin.clear(); cin.ignore(256, '\n');
		}
	}

}
void minesweeper::makeMine() // ������ ����
{
	start = clock();
	cnt = 0;

	// Ŀ�� ����
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cover[i][j] = '-';

	// �� ����
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			mine[i][j] = true;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			right[i][j] = -1;

	if (duration == -1) // Ʃ�丮��� ���� ����
	{
		mine[0][1] = false;
		mine[0][2] = false;
		mine[2][7] = false;
		mine[3][6] = false;
		mine[6][2] = false;
		mine[7][3] = false;
		mine[8][5] = false;
		mine[8][8] = false;
		mine[8][6] = false;

		right[0][1] = 'X';
		right[0][2] = 'X';
		right[2][7] = 'X';
		right[3][6] = 'X';
		right[6][2] = 'X';
		right[7][3] = 'X';
		right[8][5] = 'X';
		right[8][8] = 'X';
		right[8][6] = 'X';
	}
	else // 10���� ���� ����
	{
		while (cnt < 10)
		{
			int i = rand() % size;
			int j = rand() % size;

			if (mine[i][j] == true)
			{
				mine[i][j] = false;
				right[i][j] = 'X';
				cnt++;
			}
		}
	}

	// �� ĭ���� ���� 8�� ĭ�� �����ϴ� ���� ���� �Է� //
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cnt = 0;

			if (right[i][j] == 'X') {}
			else
			{
				if (mine[i - 1][j - 1] == false)
					if (i != 0 && j != 0)
						cnt++;
				if (mine[i - 1][j] == false)
					if (i != 0)
						cnt++;
				if (mine[i - 1][j + 1] == false)
					if (i != 0 && j != 8)
						cnt++;
				if (mine[i][j - 1] == false)
					if (j != 0)
						cnt++;
				if (mine[i][j + 1] == false)
					if (j != 8)
						cnt++;
				if (mine[i + 1][j - 1] == false)
					if (i != 8 && j != 0)
						cnt++;
				if (mine[i + 1][j] == false)
					if (i != 8)
						cnt++;
				if (mine[i + 1][j + 1] == false)
					if (i != 8 && j != 8)
						cnt++;

				right[i][j] = cnt + 48; // int -> char
			}
		}
	}
	cnt = 0;
}
bool minesweeper::click() // ��ư Ŭ���� �ǹ��ϴ� �Լ�
{
	int i, j;

	while (1)
	{
		try // ����ó��
		{
			showcover();
			cout << endl << "    Input >> ";
			cin >> str >> i >> j;

			// ���� �Է½� ���ѷ��� ����
			if (cin.fail() == 1) throw 0;

			else if (str != "yes"&&str != "YES"&&str != "NO" && str != "no") throw 1;
			else if (i < 1 || j < 1 || i>9 || j>9) throw 1;

			break;
		}
		catch (int failCode)
		{
			switch (failCode)
			{
			case 0:
				// ���� �Է½� ���ѷ��� ����
				cin.clear(); cin.ignore(256, '\n'); break;
			}

		}
	}

	cout << endl;
	i -= 1, j -= 1; // C++���� �迭 �ε����� ��ȯ


	if (str == "no" || str == "NO")
	{
		if (right[i][j] == 'X')
		{
			// ���� ����
			gameOver();
			outcome = false;
			return false;
		}
		else
		{
			uncover(i, j);

			// ���� Ŭ����
			if (gameClear() == true) {
				outcome = true;
				return false;
			}
			return true;
		}
	}

	/** X�� ǥ�� ��� **/
	else if ((str == "yes" || str == "YES") && cover[i][j] == 'X')
	{
		// �̹� Ŭ���� ĭ�� ���
		if (cover[i][j] == right[i][j] && right[i][j] != 'X')
			return true;

		cnt--;
		cover[i][j] = '-';
		return true;
	}

	/** X�� ǥ�� **/
	else if (str == "yes" || str == "YES")
	{
		// �̹� Ŭ���� ĭ�� ���
		if (cover[i][j] == right[i][j])
			return true;

		cnt++;
		cover[i][j] = 'X';
		return true;
	}
}
void minesweeper::uncover(int i, int j) // Ŀ��ĭ -> ����ĭ
{
	cover[i][j] = right[i][j]; // Ŀ���� ������ ���� ����

	/*
	���õ� Ŀ���� ���ڰ� 0�̶��
	(=���õ� Ŀ�� ���� ������ ������ 0�����)
	������ 8ĭ ���� uncover�ϱ�
	(ã�� ���ڰ� �����Ƿ�)
	*/

	if (right[i][j] == '0')
	{
		if (cover[i - 1][j - 1] != right[i - 1][j - 1])
			if (cover[i - 1][j - 1] != 'X')
				if (i != 0 && j != 0)
					uncover(i - 1, j - 1);
		if (cover[i - 1][j] != right[i - 1][j])
			if (cover[i - 1][j] != 'X')
				if (i != 0)
					uncover(i - 1, j);
		if (cover[i - 1][j + 1] != right[i - 1][j + 1])
			if (cover[i - 1][j + 1] != 'X')
				if (i != 0 && j != 8)
					uncover(i - 1, j + 1);
		if (cover[i][j - 1] != right[i][j - 1])
			if (cover[i][j - 1] != 'X')
				if (j != 0)
					uncover(i, j - 1);
		if (cover[i][j + 1] != right[i][j + 1])
			if (cover[i][j + 1] != 'X')
				if (j != 8)
					uncover(i, j + 1);
		if (cover[i + 1][j - 1] != right[i + 1][j - 1])
			if (cover[i + 1][j - 1] != 'X')
				if (i != 8 && j != 0)
					uncover(i + 1, j - 1);
		if (cover[i + 1][j] != right[i + 1][j])
			if (cover[i + 1][j] != 'X')
				if (i != 8)
					uncover(i + 1, j);
		if (cover[i + 1][j + 1] != right[i + 1][j + 1])
			if (cover[i + 1][j + 1] != 'X')
				if (i != 8 && j != 8)
					uncover(i + 1, j + 1);
	}
}
void minesweeper::showcover() // Ŀ�� ���
{
	system("cls");

	gotoxy(42, 3);
	cout << "[Remaining X: " << 10 - cnt << "]";

	gotoxy(0, 0);
	cout << endl;
	cout << "     1   2   3   4   5   6   7   8   9" << endl;
	cout << "   ��������������������������������������������������������������������������" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "  " << i + 1 << "��  ";
		for (int j = 0; j < size; j++)
			cout << cover[i][j] << "��  ";
		if (i != 8)
			cout << endl << "   ��������������������������������������������������������������������������";
		cout << endl;
	}
	cout << "   ��������������������������������������������������������������������������";
}
void minesweeper::showright() // ���� ���
{
	cout << endl;
	cout << "     1   2   3   4   5   6   7   8   9" << endl;
	cout << "   ��������������������������������������������������������������������������" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "  " << i + 1 << "��  ";
		for (int j = 0; j < size; j++)
			cout << right[i][j] << "��  ";
		if (i != 8)
			cout << endl << "   ��������������������������������������������������������������������������";
		cout << endl;
	}
	cout << "   ��������������������������������������������������������������������������";
}
bool minesweeper::gameClear() // ���� ����
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) {
			if (right[i][j] == 'X' && cover[i][j] == '-') {} // ���� ǥ�ø� ��� �س��� �ʾƵ� ���� �����ϰԲ�
			else if (cover[i][j] != right[i][j])
				return false;
		}

	system("cls");
	showright();
	gotoxy(0, 3);
	cout << "\t\t\t\t\t\t(((( (((( ((((  ))))   (((((((((   ))))" << endl;
	cout << "\t\t\t\t\t\t)))) )))) ))))  ((((  )))))))))))  ((((" << endl;
	cout << "\t\t\t\t\t\t(((( (((( ((((  ))))  ((((   ((((  ))))" << endl;
	cout << "\t\t\t\t\t\t)))) )))) ))))  ((((  ))))   ))))  ((((" << endl;
	cout << "\t\t\t\t\t\t(((( (((( ((((  ))))  ((((   ((((  ))))" << endl;
	cout << "\t\t\t\t\t\t)))) )))) ))))  ((((  ))))   ))))      " << endl;
	cout << "\t\t\t\t\t\t((((((((((((((  ))))  ((((   ((((  ))))" << endl;
	cout << "\t\t\t\t\t\t ))))))))))))   ((((  ))))   ))))  ((((" << endl;
	return true;
}
void minesweeper::gameOver() // ���� ����
{
	system("cls");
	showright();
	gotoxy(0, 3);
	cout << "\t\t\t\t\t\t((((     ))))))))) (((((((( )))))))) ((((" << endl;
	cout << "\t\t\t\t\t\t))))     ((((((((( )))))))) (((((((( ))))" << endl;
	cout << "\t\t\t\t\t\t((((     )))) )))) ((((     ))))     ((((" << endl;
	cout << "\t\t\t\t\t\t))))     (((( (((( )))))))) (((((((( ))))" << endl;
	cout << "\t\t\t\t\t\t((((     )))) )))) (((((((( )))))))) ((((" << endl;
	cout << "\t\t\t\t\t\t))))     (((( ((((     )))) ((((         " << endl;
	cout << "\t\t\t\t\t\t(((((((( ))))))))) (((((((( )))))))) ((((" << endl;
	cout << "\t\t\t\t\t\t)))))))) ((((((((( )))))))) (((((((( ))))" << endl;
	}
void minesweeper::gotoxy(int a, int b) // ������ ��ǥ�� �̵��ϴ� �Լ�
{
	COORD coord = { a, b };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
double minesweeper::best = -1; // �ְ� ���
