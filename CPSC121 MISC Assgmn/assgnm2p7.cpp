#include <iostream>
using namespace std;
int main()
{
	cout << "Enter two numbers to compare." << endl;
	int  int1, int2;
	cin >> int1 >> int2;
	if (int1 > int2)
	{
		cout << int1 << " is the larger number." << endl;
	}
	else
	{
	cout << int2 << " is the larger number." << endl;
	}
	return 0;
}
