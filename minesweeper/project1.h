#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#define size 9 // 9x9 사이즈
using namespace std;

class minesweeper
{
	static double best;		// 최고 기록
	clock_t start, finish;	// 시간 측정
	bool outcome = false;	// 승패 여부
	int duration = -1;
	string str;
	int cnt = 0;
	char cover[size][size]; // 커버
	char right[size][size]; // 정답
	bool mine[size][size];	// 지뢰 생성에 필요한 배열
public:
	minesweeper();				
	bool gameMain();
	void makeMine(); 
	bool click();				// 버튼 클릭을 의미하는 함수
	void gotoxy(int a, int b);	// 정해진 좌표로 이동하는 함수
	void uncover(int i, int j); // 커버칸 -> 정답칸
	void showcover();				// 커버 출력
	void showright();				// 정답 출력
	void gameOver();
	bool gameClear();
	void tutorial();
};
