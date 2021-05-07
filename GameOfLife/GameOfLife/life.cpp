#include "life.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>

using namespace std;

life::life()
{
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			space[i][j] = 0;
		}
	}
}

life::~life()
{
}

int life::checkRule(int i, int j)
{
	int lifeCount = 0;
	for (int k = i - 1;k < i + 2;k++)
		for (int n = j - 1;n < j + 2;n++)
			lifeCount = lifeCount + space[k][n];
	lifeCount = lifeCount + space[i][j];

	if (lifeCount == 3 && space[i][j] == 0)
		space[i][j] = 1;
	if ((lifeCount < 2 || lifeCount > 3) && (space[i][j] == 1))
		space[i][j] = 0;

	return space[i][j];
}

void life::printSpace()
{
	for (int i = 1;i < a - 1;i++) {
		for (int j = 1;j < b - 1;j++)
			if (space[i][j] == 1)
				cout << "#";
			else
				cout << " ";
		cout << endl;
	}
}

void life::generateLife()
{
	for (int i = 1;i < a-1;i++)
		for (int j = 1;j < b-1;j++)
			space[i][j] = rand()%2;
}

void life::runLife()
{
	generateLife();
	printSpace();
	Sleep(1000);
	system("cls");
	while (1) {
		for (int i = 1;i < a - 1;i++)
			for (int j = 1;j < b - 1;j++)
				checkRule(i, j);
		printSpace();
		Sleep(1000);
		system("cls");
	}
}
