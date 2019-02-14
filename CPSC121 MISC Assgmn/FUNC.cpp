#include <iostream>
#include "FUNC.h"
using namespace std;
void arrayin(double prices[], int size)
{
	for (int i = 0; i < size; i++)
	{
		do 
		{
		cout << "Enter price for row " << i + 1 << ": " << endl;
		cin >> prices[i];
		} while (prices[i] < 0);
	}
}
double displayChart(char array[][30], int size, double prices[], int size2)
{
	cout << "\t \t Seats" << endl;
	cout << "\t123456789012345678901234567890" << endl;
	for( int i = 0; i < size; i++)
	{
		cout << "Row " << i + 1 << "\t";
		for(int j = 0; j < 30; j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
	int row, seat;
	double sale;
	string response;
	while (response != "Done") 
	{
	cout << "Enter the Row and Seat you wish to buy a ticket for: " << endl;
	cin >> row;
	cin >> seat;
	while(array[row - 1][seat - 1] == '*')
	{
		cout << "Sorry that seat is taken, choose another: " << endl;
		cin >> row; 
		cin >> seat;
	}
	while(row < 1 || row > 15 || seat < 1 || seat > 30)
	{
		cout << "Sorry that seat does not exist, choose another: " << endl;
		cin >> row; 
		cin >> seat;
	}
	array[row - 1][seat - 1] = '*';
	
	sale += prices[row - 1];
	cout << "If you do not wish to buy any other tickets, enter 'Done'\n";
	cin >> response;
	if (response == "Done")
	{
		cout << "Your total cost is $" << sale << "." << endl;	
		return sale;
	}

	}
}
double ttotal(double sales)
{
	static double total = 0;
	total += sales;
	return total;
}
void seatingData(char array[][30], int size)
{
	int sold = 0, available = 0, availRow = 0;
	for (int i = 0; i < size; i++)
	{
		availRow = 0;
		for (int j = 0; j < 30; j++)
		{
			if(array[i][j] == '#')
			{
				availRow++;
				available++;
			}
			else
				sold++;
		}
		cout << "Amount of seats available in row " << i + 1 << " is " << availRow << endl;
	}
	cout << "Total amount of seats available is " << available << endl;
	cout << "The amount of sold seats is " << sold << endl;
}	