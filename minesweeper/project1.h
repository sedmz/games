#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#define size 9 // 9x9 ������
using namespace std;

class minesweeper
{
	static double best;		// �ְ� ���
	clock_t start, finish;	// �ð� ����
	bool outcome = false;	// ���� ����
	int duration = -1;
	string str;
	int cnt = 0;
	char cover[size][size]; // Ŀ��
	char right[size][size]; // ����
	bool mine[size][size];	// ���� ������ �ʿ��� �迭
public:
	minesweeper();				
	bool gameMain();
	void makeMine(); 
	bool click();				// ��ư Ŭ���� �ǹ��ϴ� �Լ�
	void gotoxy(int a, int b);	// ������ ��ǥ�� �̵��ϴ� �Լ�
	void uncover(int i, int j); // Ŀ��ĭ -> ����ĭ
	void showcover();				// Ŀ�� ���
	void showright();				// ���� ���
	void gameOver();
	bool gameClear();
	void tutorial();
};
