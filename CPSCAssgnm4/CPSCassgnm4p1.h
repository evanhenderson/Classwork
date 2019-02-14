#include <iostream>
using namespace std;
int main()
{
	int val, sum;
	cout << "Input a positive integer value" << endl;
	cin >> val;
	while (val < 1)
	{
		cout << "Input was not a positive integer" << endl;
		cin >> val;
	}
	for (int i = 0; i <= val; i++)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}