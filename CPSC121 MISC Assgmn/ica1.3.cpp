#include <iostream>
using namespace std;
int main()
{
	int b;
	cout << "Input the number of books you have purchased this month." << endl;
	cin >> b;
	if (b == 0)
	{
		cout << "0 Points were earned this month." << endl;
	}
	else if (b == 1)
	{
		cout << "5 Points were earned this month." << endl;
	}
	else if (b == 2)
	{
		cout << "15 Points were earned this month." << endl;
	}
	else if (b == 3)
	{
		cout << "30 Points were earned this month." << endl;
	}
	else if (b >= 4)
	{
		cout << "60 Points were earned this month." << endl;
	}
	return 0;
}
