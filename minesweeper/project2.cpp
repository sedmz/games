#include "project1.h"

minesweeper::minesweeper()
{
	/** 衛濛 �飛� **/
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t    忙式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t    弛  Minesweeper弛" << endl;
	cout << "\t\t    戌式式式式式式汗式式式式式式戎" << endl;
	cout << "\t\t    忙式式式式式式江式式式式式式忖" << endl;
	cout << "\t\t    弛  Game Start!弛" << endl;
	cout << "\t\t    戌式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t         [enter]" << endl;
	cout << "\t\t            ";
	cin.clear(); cin.ignore(256, '\n');


	/** How to play? **/
	system("cls");
	cout << endl << endl << endl << endl;
	cout << "\t                How to play?" << endl;
	cout << "\t     忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t     弛                              弛" << endl;
	cout << "\t     弛     MAXTRIX you think mine   弛" << endl;
	cout << "\t     弛       Input >> yes 1 1       弛" << endl;
	cout << "\t     弛                              弛" << endl;
	cout << "\t     弛   MATRIX you think not mine  弛" << endl;
	cout << "\t     弛        Input >> no 1 1       弛" << endl;
	cout << "\t     弛                              弛" << endl;
	cout << "\t     戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t                 [enter]" << endl;
	cout << "\t\t            ";
	cin.clear(); cin.ignore(256, '\n');


	/** 唳堅 僥掘 **/
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t         ⅦⅦⅦⅦ" << endl;
	cout << "\t\t      ⅦⅦⅦⅧⅦⅦⅦ" << endl;
	cout << "\t\t    ⅦⅦ  ⅧⅧⅧ  ⅦⅦ" << endl;
	cout << "\t\t  ⅦⅦ   ⅧⅧⅧⅧ   ⅦⅦ" << endl;
	cout << "\t\t    ⅦⅦ  ⅧⅧⅧ  ⅦⅦ" << endl;
	cout << "\t\t      ⅦⅦⅦⅧⅦⅦⅦ" << endl;
	cout << "\t\t         ⅦⅦⅦⅦ" << endl;
	cout << endl;
	cout << "\t 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t 弛 ≦ Excessive game cause blurred vision弛" << endl;
	cout << "\t 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl << endl;
	cout << "\t                 [enter]" << endl;
	cout << "\t\t            ";
	cin.clear(); cin.ignore(256, '\n');
	

	/** Tutorial? **/
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t     忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t     弛                              弛" << endl;
	cout << "\t     弛     Do you want Tutorial?    弛" << endl;
	cout << "\t     弛          YES or NO           弛" << endl;
	cout << "\t     弛                              弛" << endl;
	cout << "\t     戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t                 [enter]" << endl;
	cout << "\t\t           ";

	while (1)
	{
		// 蕨諼籀葬
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
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛             Hi :)             弛" << endl;
	cout << "\t\t\t\t\t\t弛     Let's start TUTORIAL      弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n'); // 幗ぷ 綠辦晦

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛  First, Let's click any matrix弛" << endl;
	cout << "\t\t\t\t\t\t弛         Input >> no 5 5       弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;

	while (1){
		try // no 5 5 擊 殮溘嫡擊 陽梱雖 奩犒
		{
			gotoxy(0, 21);
			cout << "    Input >> ";
			cin >> str >> i >> j;

			if (cin.fail() == 1) throw 0; // int⑽縑 僥濠陛 殮溘腎歷擊 唳辦 渠綠
			else if (str != "NO" && str != "no") throw 1;
			else if (i != 5 || j != 5) throw 2;

			break;
		}
		catch (int failCode)
		{
			cin.clear(); cin.ignore(256, '\n');

			showcover(); gotoxy(0, 8);
			cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
			cout << "\t\t\t\t\t\t弛                               弛" << endl;
			cout << "\t\t\t\t\t\t弛              Error            弛" << endl;
			cout << "\t\t\t\t\t\t弛         Input >> no 5 5       弛" << endl;
			cout << "\t\t\t\t\t\t弛                               弛" << endl;
			cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
			}
	}

	uncover(4, 4);

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛           Excellent           弛" << endl;
	cout << "\t\t\t\t\t\t弛           ~~~Ⅵ~~~            弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛   Number in each matrix means 弛" << endl;
	cout << "\t\t\t\t\t\t弛 number of mines around them :)弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛        Then, we can guess     弛" << endl;
	cout << "\t\t\t\t\t\t弛      the location of mine!    弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛    Now, Let's mark the mine   弛" << endl;
	cout << "\t\t\t\t\t\t弛       Input >> yes 1 3        弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	
	while (1) {
		try // yes 1 3 擊 殮溘嫡擊 陽梱雖 奩犒
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
			cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
			cout << "\t\t\t\t\t\t弛                               弛" << endl;
			cout << "\t\t\t\t\t\t弛              Error            弛" << endl;
			cout << "\t\t\t\t\t\t弛        Input >> yes 1 3       弛" << endl;
			cout << "\t\t\t\t\t\t弛                               弛" << endl;
			cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
		}
	}

	uncover(0, 2);
	cnt++;

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛           Excellent           弛" << endl;
	cout << "\t\t\t\t\t\t弛           ~~~Ⅵ~~~            弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n');

	showcover(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛  What if we click on a mine?  弛" << endl;
	cout << "\t\t\t\t\t\t弛         Input >> no 1 2       弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;

	while (1) {
		try // no 1 2 蒂 殮溘嫡擊 陽梱雖 奩犒
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
			cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
			cout << "\t\t\t\t\t\t弛                               弛" << endl;
			cout << "\t\t\t\t\t\t弛              Error            弛" << endl;
			cout << "\t\t\t\t\t\t弛        Input >> no 1 2        弛" << endl;
			cout << "\t\t\t\t\t\t弛                               弛" << endl;
			cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
		}
	}

	uncover(0, 1);

	system("cls");
	showright(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛         Ooops TT^TT...        弛" << endl;
	cout << "\t\t\t\t\t\t弛          Game is Over         弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	getchar(); cin.clear(); cin.ignore(256, '\n');

	system("cls");
	showright(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛          From now on,         弛" << endl;
	cout << "\t\t\t\t\t\t弛   Find 9 Mines by yourself!   弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');

	system("cls");
	showright(); gotoxy(0, 8);
	cout << "\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t弛          Minesweeper          弛" << endl;
	cout << "\t\t\t\t\t\t弛          Game Start!          弛" << endl;
	cout << "\t\t\t\t\t\t弛                               弛" << endl;
	cout << "\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t\t     [enter]" << endl << "\t\t\t\t\t\t\t\t";
	cin.clear(); cin.ignore(256, '\n');
	

	finish = clock();
	duration = (finish - start) / CLOCKS_PER_SEC;
}
bool minesweeper::gameMain()
{
	makeMine();					// 億 雖煆っ 儅撩
	while (click() == true) {}  // 贗葛 奩犒


	/** Score **/
	finish = clock();
	duration = (finish - start) / CLOCKS_PER_SEC;

	if (outcome == true)
	{
		if (best == -1) // 嬴霜 晦煙檜 橈擊 唳辦
			best = duration;
		else if (best > duration)
			best = duration;
	}

	gotoxy(0, 12);
	cout << "\t\t\t\t\t\t   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t   弛                              弛" << endl;
	cout << "\t\t\t\t\t\t\t   time : " << duration / 60 << "碟" << duration - duration / 60 * 60 << "蟾" << endl;
	if (best == -1)
		cout << "\t\t\t\t\t\t\t   best score : -" << endl;
	else
		cout << "\t\t\t\t\t\t\t   best score : " << (int)best / 60 << "碟" << (int)best - (int)best / 60 * 60 << "蟾" << endl;
	cout << "\t\t\t\t\t\t   弛                              弛" << endl;
	cout << "\t\t\t\t\t\t   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t               [enter]" << endl;
	cout << "\t\t\t\t\t\t\t          ";
	getchar(); cin.clear(); cin.ignore(256, '\n');


	/** Restart? **/
	gotoxy(0, 12);
	cout << "\t\t\t\t\t\t   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "\t\t\t\t\t\t   弛                              弛" << endl;
	cout << "\t\t\t\t\t\t   弛      Do you want Restart?    弛" << endl;
	cout << "\t\t\t\t\t\t   弛          YES or NO           弛" << endl;
	cout << "\t\t\t\t\t\t   弛                              弛" << endl;
	cout << "\t\t\t\t\t\t   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	cout << "\t\t\t\t\t\t               [enter]" << endl;
	cout << "\t\t\t\t\t\t\t         ";
	
	while (1)
	{
		// 蕨諼籀葬
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
void minesweeper::makeMine() // 億啪歜 儅撩
{
	start = clock();
	cnt = 0;

	// 醴幗 儅撩
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cover[i][j] = '-';

	// っ 儅撩
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			mine[i][j] = true;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			right[i][j] = -1;

	if (duration == -1) // ぅ饜葬橡辨 雖煆 儅撩
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
	else // 10偃曖 雖煆 儅撩
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

	// 陝 蘊葆棻 輿嬪 8偃 蘊縑 襄營ж朝 雖煆 偃熱 殮溘 //
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
bool minesweeper::click() // 幗が 贗葛擊 曖嘐ж朝 л熱
{
	int i, j;

	while (1)
	{
		try // 蕨諼籀葬
		{
			showcover();
			cout << endl << "    Input >> ";
			cin >> str >> i >> j;

			// 僥濠 殮溘衛 鼠и瑞Щ 寞雖
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
				// 僥濠 殮溘衛 鼠и瑞Щ 寞雖
				cin.clear(); cin.ignore(256, '\n'); break;
			}

		}
	}

	cout << endl;
	i -= 1, j -= 1; // C++鼻曖 寡翮 檣策蝶煎 滲��


	if (str == "no" || str == "NO")
	{
		if (right[i][j] == 'X')
		{
			// 啪歜 螃幗
			gameOver();
			outcome = false;
			return false;
		}
		else
		{
			uncover(i, j);

			// 啪歜 贗葬橫
			if (gameClear() == true) {
				outcome = true;
				return false;
			}
			return true;
		}
	}

	/** X濠 ル衛 鏃模 **/
	else if ((str == "yes" || str == "YES") && cover[i][j] == 'X')
	{
		// 檜嘐 贗葛и 蘊橾 唳辦
		if (cover[i][j] == right[i][j] && right[i][j] != 'X')
			return true;

		cnt--;
		cover[i][j] = '-';
		return true;
	}

	/** X濠 ル衛 **/
	else if (str == "yes" || str == "YES")
	{
		// 檜嘐 贗葛и 蘊橾 唳辦
		if (cover[i][j] == right[i][j])
			return true;

		cnt++;
		cover[i][j] = 'X';
		return true;
	}
}
void minesweeper::uncover(int i, int j) // 醴幗蘊 -> 薑港蘊
{
	cover[i][j] = right[i][j]; // 醴幗縑 陛溥霞 璋濠 嗥辦晦

	/*
	摹鷗脹 醴幗曖 璋濠陛 0檜塭賊
	(=摹鷗脹 醴幗 輿嬪 雖煆曖 偃熱陛 0偃塭賊)
	輿嬪曖 8蘊 傳и uncoverж晦
	(瓊擊 雖煆陛 橈戲嘎煎)
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
void minesweeper::showcover() // 醴幗 轎溘
{
	system("cls");

	gotoxy(42, 3);
	cout << "[Remaining X: " << 10 - cnt << "]";

	gotoxy(0, 0);
	cout << endl;
	cout << "     1   2   3   4   5   6   7   8   9" << endl;
	cout << "   忙式式式成式式式成式式式成式式式成式式式成式式式成式式式成式式式成式式式忖" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "  " << i + 1 << "弛  ";
		for (int j = 0; j < size; j++)
			cout << cover[i][j] << "弛  ";
		if (i != 8)
			cout << endl << "   戍式式式托式式式托式式式托式式式托式式式托式式式托式式式托式式式托式式式扣";
		cout << endl;
	}
	cout << "   戌式式式扛式式式扛式式式扛式式式扛式式式扛式式式扛式式式扛式式式扛式式式戎";
}
void minesweeper::showright() // 薑港 轎溘
{
	cout << endl;
	cout << "     1   2   3   4   5   6   7   8   9" << endl;
	cout << "   忙式式式成式式式成式式式成式式式成式式式成式式式成式式式成式式式成式式式忖" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "  " << i + 1 << "弛  ";
		for (int j = 0; j < size; j++)
			cout << right[i][j] << "弛  ";
		if (i != 8)
			cout << endl << "   戍式式式托式式式托式式式托式式式托式式式托式式式托式式式托式式式托式式式扣";
		cout << endl;
	}
	cout << "   戌式式式扛式式式扛式式式扛式式式扛式式式扛式式式扛式式式扛式式式扛式式式戎";
}
bool minesweeper::gameClear() // 啪歜 撩奢
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) {
			if (right[i][j] == 'X' && cover[i][j] == '-') {} // 雖煆 ル衛蒂 賅舒 п場雖 彊嬴紫 撩奢 陛棟ж啪莠
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
void minesweeper::gameOver() // 啪歜 褒ぬ
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
void minesweeper::gotoxy(int a, int b) // 薑п霞 謝ル煎 檜翕ж朝 л熱
{
	COORD coord = { a, b };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
double minesweeper::best = -1; // 譆堅 晦煙
