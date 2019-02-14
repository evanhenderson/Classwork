#include <iostream>
using namespace std;
#include "FUNC.h"
int main()
{
	double prices[15], sales;
	char chart[15][30];
	int choice;
	double total = ttotal(sales);
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			chart[i][j] = '#';
		}
	}
	arrayin(prices, 15);
	cout << "1: Display seating chart\n2: Display seats remaining\n3: Display prices for each row\n4: Display total sales\n";
	cin >> choice;
	switch(choice){
		case 1: 
			sales = displayChart(chart, 15, prices, 15);
			break;
		case 2:
			seatingData(chart, 15);
			break;
		case 3:
			for (int i = 0; i < 15; i++)
			{
				cout << "Price for row " << i + 1 << " is " << prices[i] << endl;
			}
			break;
		case 4:
			cout << "The total sales is " << total << endl;
	}
	
	total = ttotal(sales);
	
	return 0;
}