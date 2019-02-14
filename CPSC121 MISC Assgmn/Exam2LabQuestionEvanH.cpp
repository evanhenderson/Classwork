#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int computerChoice();
int userChoice();
string determineWinner(int , int );
int main()
{
	int compsel = computerChoice();
	int usersel = userChoice();
	string compselout;
	if (compsel == 1)
		compselout = "Rock";
	else if (compsel == 2)
		compselout = "Paper";
	else if (compsel == 3)
		compselout = "Scissors";
	cout << "The computer chose: " << compselout << endl;
	cout << determineWinner(compsel, usersel) << endl;	
	return 0;
}
int computerChoice()
{
	srand((unsigned)time(0));
	int compSel = (rand()%3)+1;
	return compSel;
}
int userChoice()
{
	int userSel;
	cout << "This is a game of rock, paper, scissors." << endl << "The computer will randomly choose 1, 2, or 3 corresponding" << endl << "to rock, paper, or scissors in that order." << endl;
	cout << "Please pick 1, 2, or 3 to play. 1 = Rock, 2 = Paper, and 3 = Scissors." << endl;
	cin >> userSel;
	return userSel;
}
string determineWinner(int comp, int user)
{
	string result;
	if (user == 1 && comp == 3)
	{
	result = "You Win!";
	}
	else if (user == 1 && comp == 2)
	{
		result = "You lose...";
	}
	else if (user == 1 && comp == 1)
	{
		result = "It's a Tie!";
	}
	if (user == 2 && comp == 1)
	{
	result = "You Win!";
	}
	else if (user == 2 && comp == 3)
	{
		result = "You lose...";
	}
	else if (user == 2 && comp == 2)
	{
		result = "It's a Tie!";
	}if (user == 3 && comp == 2)
	{
	result = "You Win!";
	}
	else if (user == 3 && comp == 1)
	{
		result = "You lose...";
	}
	else if (user == 3 && comp == 3)
	{
		result = "It's a Tie!";
	}
	return result;
}	