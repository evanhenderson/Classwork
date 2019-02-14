#include <iostream>
#include <string>
using namespace std;
int main()
{
	string salsaType[5] = {"mild", "medium", "sweet", "hot", "zesty"};
	int numSold[5];
	int totalSales = 0;
	for (int i = 0; i < 5; i++)
	{
		do{
		cout << "Enter amount of jars sold of " << salsaType[i] << endl;
		cin >> numSold[i];
		}
		while ( i < 0);
	}
	int lowest = numSold[0];
	string lowestType = salsaType[0];
	int highest = numSold[0];
	string highestType = salsaType[0];
	for (int i = 0; i < 5; i++)
	{
		cout << salsaType[i] << " sold " << numSold[i] << " jars last month." << endl;
		totalSales += numSold[i];
		if (numSold[i] < lowest)
		{
		lowest = numSold[i];
		lowestType = salsaType[i];
		}
		if (numSold[i] > highest)
		{
			highest = numSold[i];
			highestType = salsaType[i];
		}
	}
	cout << "The total sales last month were " << totalSales << endl;
	cout << "The highest selling salsa type was " << highestType << ", with " << highest << " in sales." << endl;
	cout << "The lowest selling salsa type was " << lowestType << ", with " << lowest << " in sales." << endl;
	return 0;
}