#include <iostream>
using namespace std;
int main()
{
	int o, perc, d;
	cout << "Input # of organisms." << endl;
	cin >> o;
	cout << "Input Population increase as a percentage" << endl;
	cin >> perc;
	cout << "Input # of days they will multiply" << endl;
	cin >> d;
	while (o < 2)
	{
		cout << "# of organisms cannot be less than 2. Input a valid population." << endl;
		cin >> o;
	}
	while (perc < 0)
	{
		cout << "Population increase cannot be negative in this scenario. Input a valid percetage." << endl;
		cin >> perc;
	}
	while (d < 1)
	{
		cout << "Must be at least 1 day. Input valid length of time." << endl;
		cin >> d;
	}
	double perc2;
	perc2 = perc * 0.01;
	for (int i = 1; i <= d; i++)
	{
		cout << "Day " << i << endl;
		o = o + (o * perc2);
		cout << o << " organisms" << endl;
	}
	return 0;
}