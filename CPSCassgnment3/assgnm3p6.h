#include <iostream>
using namespace std;
int man()
{
	cout << "Enter an integer in the range of 1-15" << endl;
	int in;
	cin >> in;
	while (in < 1 || in > 15)
	{
		cout << "Input must be between 1-15" << endl;
		cin >> in;
	}
	for (int i = 1; i <= in; i++)
	{
		for (int l = 1; l <= in; l++)
		{	
			cout << 'X';
		}
		cout << endl;
	}
	return 0;
}