#include <iostream>
using namespace std;
int main()
{
	int values[10];
	cout << "Enter in the 10 values into the array." << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Value #" << i+1 << ": ";
		cin >> values[i];
	}
	int large = values[0], small = values[0];
	for (int i = 0; i < 10; i++)
	{
		if (large < values[i])
			large = values[i];
		if (small > values[i])
			small = values[i];
	}
	cout << "The largest value is " << large << endl;
	cout << "The smallest value is " << small << endl;
	return 0;
}