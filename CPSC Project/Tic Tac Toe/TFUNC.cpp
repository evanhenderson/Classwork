#include <iostream>
#include <string>
#include <cstdlib>
#include "TFUNC.h"
using namespace std;

void user1Input(char array[][3], int size)
{
	int row, column;
	
	cout << "In which row would you like to place your X? ";
	cin >> row;
		
	while (row < 1 || row > 3)
	{
		cout << "That is not a valid input. Please enter a number 1 through 3: ";
		cin >> row;
	}
	
	cout << "In which column would you like to place your X? ";
	cin >> column;  
	
	while (column < 1 || column > 3)
	{
		cout << "That is not a valid input. Please enter a number 1 through 3: ";
		cin >> column;
	}
	
	while (array[row - 1][column - 1] != '_')
	{
		cout << "This space has already been played. Select a row again: ";
		cin >> row; 
		
		while (row < 1 || row > 3)
		{
			cout << "That is not a valid input. Please enter a number 1 through 3: ";
			cin >> row;
		}
		
		cout << "Now select a column again: ";
		cin >> column; 
		
		while (column < 1 || column > 3)
		{
			cout << "That is not a valid input. Please enter a number 1 through 3: ";
			cin >> column;
		}
	}
	array[row -1 ][column - 1] = 'X';
	
}
void user2Input(char array[][3], int size)
{
	int row, column;
	
	cout << "In which row would you like to place your O? ";
	cin >> row;
		
	while (row < 1 || row > 3)
	{
		cout << "That is not a valid input. Please enter a number 1 through 3: ";
		cin >> row;
	}
	
	cout << "In which column would you like to place your O? ";
	cin >> column;  
	
	while (column < 1 || column > 3)
	{
		cout << "That is not a valid input. Please enter a number 1 through 3: ";
		cin >> column;
	}
	
	while (array[row - 1][column - 1] != '_')
	{
		cout << "This space has already been played. Select a row again: ";
		cin >> row; 
		
		while (row < 1 || row > 3)
		{
			cout << "That is not a valid input. Please enter a number 1 through 3: ";
			cin >> row;
		}
		
		cout << "Now select a column again: ";
		cin >> column; 
		
		while (column < 1 || column > 3)
		{
			cout << "That is not a valid input. Please enter a number 1 through 3: ";
			cin >> column;
		}
	}
	array[row - 1][column - 1] = 'O';
}
void compInput(char array[][3], int size)
{
	int row, column;
	
	srand(time(0));
	do
	{
		row = (rand() % 3);
	
		column = (rand() % 3);	
	} while (array[row][column] != '_');
	
	array[row][column] = 'O';
}
void displayBoard(char array[][3], int size, std::string name1, std::string name2)
{
	cout << "\t Tic Tac Toe\n";
	cout << name1 << " (X)================"<< name2 << " (O)\n";
	cout << "     ||      ||     \n  " << array[0][0] << "  ||\t  " << array[0][1] << "  ||  " << array[0][2] << "  \n";
	cout << "=====||======||=====\n";
	cout << "     ||      ||     \n  " << array[1][0] << "  ||\t  " << array[1][1] << "  ||  " << array[1][2] << "  \n";
	cout << "=====||======||=====\n";
	cout << "     ||      ||     \n  " << array[2][0] << "  ||\t  " << array[2][1] << "  ||  " << array[2][2] << "  \n";
	cout << "     ||      ||     \n";
}
int winner(char array[][3], int size, std::string name1, std::string name2)
{
	// Player 1 wins
	if(array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X')
	{
		cout << name1 << " is the winner.\n";
		return 1;
	}
	
	else if(array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X')
	{
		cout << name1 << " is the winner.\n";
		return 1;
	}
	
	else if(array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X')
	{
		cout << name1 << " is the winner.\n";
		return 1;
	}
	
	else if(array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X')
	{
		cout << name1 << " is the winner.\n";
	}
	
	else if(array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X')
	{
		cout << name1 << " is the winner.\n";
	}
	
	else if(array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X')
	{
		cout << name1 << " is the winner.\n"; 
	}
	
	else if(array[0][0] == 'X' && array[1][1] == 'X' && array [2][2] == 'X')
	{
		cout << name1 << " is the winner.\n";
		return 1;
	}
	
	else if(array[0][2] == 'X' && array[1][1] == 'X' && array[2][0] == 'X')
	{
		cout << name1 << " is the winner.\n";
		return 1;
	}
	
	// Player 2/Computer wins
	else if(array[0][0] == 'O' && array[0][1] == 'O' && array[0][2] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	else if(array[1][0] == 'O' && array[1][1] == 'O' && array[1][2] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	else if(array[2][0] == 'O' && array[2][1] == 'O' && array[2][2] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	else if(array[0][0] == 'O' && array[0][1] == 'O' && array[0][2] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	else if(array[1][0] == 'O' && array[1][1] == 'O' && array[1][2] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	else if(array[2][0] == 'O' && array[2][1] == 'O' && array[2][2] == 'O')
	{
		cout << name2 << " is the winner.\n"; 
		return 1;
	}
	
	else if(array[0][0] == 'O' && array[1][1] == 'O' && array [2][2] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	else if(array[0][2] == 'O' && array[1][1] == 'O' && array[2][0] == 'O')
	{
		cout << name2 << " is the winner.\n";
		return 1;
	}
	
	// No winner
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (array[i][j] == '_')
				{	
				cout << "Keep playing!";
					return 2;
				}
			}
		}
	}
	
	return 0;
}