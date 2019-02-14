#include <iostream>
#include <cmath>
using namespace std;
double futureValue(double P, double i, double t)
{
	double F;
	F = P*pow((1+i), t);
	return F;
}
int main()
{
	double P, i, t;
	cout << "Input the accounts present value, monthly interest rate, and number of months in that order." << endl;
	cin >> P >> i >> t;
	cout << "The accounts Future Value is: " << futureValue(P, i, t) << endl;
	return 0;
}
	