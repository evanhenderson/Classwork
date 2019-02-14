#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the number of pennies, nickels, dimes, and quarters to add to $1. In that order." << endl;
	double p, n, d, q;
	cin >> p >> n >> d >> q;
	p *= 0.01;
	n *= 0.05;
	d *= 0.10;
	q *= 0.25;
	if ((p + n + d + q) == 1.00)
	{
		cout << "Congradulations you have won the game!" << endl;
	}
	else if ((p + n + d + q) < 1.00)
	{
		cout << "That amount was totaled to be less than $1." << endl;
	}
	else if ((p + n + d + q) > 1.00)
	{
		cout << "That amount was totaled to be greater than $1." << endl;
	}
	return 0;
}
