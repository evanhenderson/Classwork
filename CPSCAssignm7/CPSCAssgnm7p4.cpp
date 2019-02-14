#include <iostream>
using namespace std;
int main()
{
	string lowname, highname;
	string name[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	double total = 0, avg, high, low;
	double rainfall[12];
	for (int i = 0; i < 12; i++)
	{
		do {
		cout << "Enter the rainfall for month #" << i+1 << ": ";
		cin >> rainfall[i];
		} while (rainfall[i] < 0);
		total += rainfall[i];
	}
	avg = total / 12;
	high = rainfall[0];
	low = rainfall[0];
	for (int i = 0; i < 12; i++)
	{
		if (high < rainfall[i])
		{
			high = rainfall[i];
			highname = name[i];
		}
		if (low > rainfall[i])
		{
			low = rainfall[i];
			lowname = name[i];
		}
	}
	cout << "The total amount of rain that year is " << total << endl;
	cout << "The average amount of rain that year is " << avg << endl;
	cout << "The highest rainfall in a month was " << high << " in " << highname << endl;
	cout << "The lowest rainfall in a month was " << low << " in " << lowname << endl;
	return 0;
}