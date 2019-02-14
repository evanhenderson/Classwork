#include <iostream>
using namespace std;
double fallingDistance(int t);
int main()
{
	int t, d;
	cout << "Enter the time (in seconds) that the object has been falling: ";
	cin >> t;
	cout << "\nTable of the distances an object falls due to gravity in specific time periods\n\n";
	cout << "Time		Distance" << endl << "(in seconds)			(in meters)" << endl;
	for (int i = 1; i <= t; i++)
	{
		d = fallingDistance(i) + 0.5;
		cout << i << "		" << d << endl;
	}
	return 0;
}
double fallingDistance(int t)
{
	double d, g;
	g = 9.8;
	d = 0.5*g*(t*t);
	return d;
}