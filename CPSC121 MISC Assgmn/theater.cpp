#include <iostream>
using namespace std;
#include "FUNC.h"
int main()
{
	double prices[15], sales;
	char chart[15][30];
	int choice = 0;
	double total = 0;
	string exit;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			chart[i][j] = '#';
		}
	}
	arrayin(prices, 15);
	while (choice == 0)
	{
	cout << "1: Display seating chart and buy a ticket\n2: Display seats remaining\n3: Display prices for each row\n4: Display total sales\n5: Exit the program\n";
	cin >> choice;
	switch(choice){
		case 1: 
			sales = displayChart(chart, 15, prices, 15);
			choice = 0;
			break;
		case 2:
			seatingData(chart, 15);
			choice = 0;
			break;
		case 3:
			for (int i = 0; i < 15; i++)
			{
				cout << "Price for row " << i + 1 << " is " << prices[i] << endl;
			}
			choice = 0;
			break;
		case 4:
			cout << "The total sales is " << total << endl;
			choice = 0;
			break;
		case 5:
			return 0;
	}
	total = ttotal(sales);
	}
	return 0;
}