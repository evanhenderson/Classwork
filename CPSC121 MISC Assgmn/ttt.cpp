#include <iostream>
#include "TFUNC.h"
using namespace std;
int main()
{
	int board[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			static int space = 1;
			board[i][j] = space;
			space++;
		}
	}
	cout << "\t||\t||\t\n  " << board[1][1] << "  ||\t  " << board[1][2] << "  ||  " << board[1][3] << "  \n";
	return 0;
}