#include <iostream>
using namespace std;
double avgArray(int [], int );
int main()
{
	const int SIZE = 10;
	int userNums[SIZE];
	cout << "Enter 10 numbers: ";
	for (int count = 0; count < SIZE; count++)
	{
		cout << "#" << (count + 1) << " ";
		cin >> userNums[count];
	}
	count << "The average of those numbers is ";
	cout << avgArray(userNums, SIZE) << endl;
	return 0;
}
double avgArray(int val[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + val[i];
	double total = sum/size;
	return total;
}