#include <iostream>
#include <string>
#include <cstdlib>
#include "TFUNC.h"
using namespace std;
int main()
{
	// Variables and arrays
	int go, loop1 = 0, loop2 = 0, ans;
	char board[3][3];
	std::string name1, name2;
	bool cont = true;
	
	// Initializing board
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = '_';
		}
	}
	
	// Input names/choose to play computer
	cout << "What is player 1's name? ";
	cin >> name1;
	
	cout << "What is player 2's name? Or if you would like to play against the computer type 'Computer' ";
	cin >> name2;
	cout << endl;
	
	// Display initial board
	
	displayBoard(board, 3, name1, name2);
	
	// funcion calls, playing
	do {
	if (name2 == "Computer" || name2 == "computer")
	{
		for (; loop1 < 1; loop1++)
		{
			for (; loop2 < 3; loop2++)
			{
				user1Input(board, 3);
				displayBoard(board, 3, name1, name2);
				go = winner(board, 3, name1, name2);
					if (go == 0)
					{
						cout << "It's a draw!\n";
						do{
						cout << "Do you wish to play again? 1 = Yes; 2 = No\n";
						cin >> ans;
						}while(ans < 1 || ans > 2);
						if (ans == 2)
							return 0;
						else if (ans == 1)
						{
							loop1 = -1;
							loop2 = 2;
							replay(board, 3, name1, name2);
						}
					}
					else if (go == 1)
					{
						do{
						cout << "Do you wish to play again? 1 = Yes; 2 = No\n";
						cin >> ans;
						}while(ans < 1 || ans > 2);
						if (ans == 2)
							return 0;
						else if (ans == 1)
						{
							loop1 = -1;
							loop2 = 2;
							replay(board, 3, name1, name2);	
						}							
					}
				compInput(board, 3);
				displayBoard(board, 3, name1, name2);
			}
			
			go = winner(board, 3, name1, name2);
			
			if (go == 2)
			{
				loop1 = -1;
				loop2 = 2;
			}
			else
			{
				do{
					cout << "Do you wish to play again? 1 = Yes; 2 = No\n";
					cin >> ans;
				}while(ans < 1 || ans > 2);
				if (ans == 2)
					return 0;
				else if (ans == 1)
				{
					loop1 = -1;
					loop2 = 2;
					replay(board, 3, name1, name2);
				}
			}
		}
		
	}
	else
	{
		for (; loop1 < 1; loop1++)
		{
			for (; loop2 < 3; loop2++)
			{
				user1Input(board, 3);
				displayBoard(board, 3, name1, name2);
				go = winner(board, 3, name1, name2);
					if (go == 0)
					{
						cout << "It's a draw!\n";
						do{
						cout << "Do you wish to play again? 1 = Yes; 2 = No\n";
						cin >> ans;
						}while(ans < 1 || ans > 2);
						if (ans == 2)
							return 0;
						else if (ans == 1)
						{
							loop1 = -1;
							loop2 = 2;
							replay(board, 3, name1, name2);
						}
					}
					else if (go == 1)
					{
						do{
						cout << "Do you wish to play again? 1 = Yes; 2 = No\n";
						cin >> ans;
						}while(ans < 1 || ans > 2);
						if (ans == 2)
							return 0;
						else if (ans == 1)
						{
							loop1 = -1;
							loop2 = 2;
							replay(board, 3, name1, name2);
						}
					}
				user2Input(board, 3);
				displayBoard(board, 3, name1, name2);
			}
			
			go = winner(board, 3, name1, name2);
			
			if (go == 2)
			{
				loop1 = -1;
				loop2 = 2;
			}
			else
			{
				do{
					cout << "Do you wish to play again? 1 = Yes; 2 = No\n";
					cin >> ans;
				}while(ans < 1 || ans > 2);
				if (ans == 2)
					return 0;
				else if (ans == 1)
				{
					loop1 = -1;
					loop2 = 2;
					replay(board, 3, name1, name2);
				}
			}
		}
		
	}
	} while(cont == true);
	return 0;
}