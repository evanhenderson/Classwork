#include <iostream>
using namespace std;
int main()
{
	double actv, assmv, ptax;
	cout << "Type in the Actual value of your property to see both your assessment value and property tax" << endl;
	cin >> actv;
	assmv = actv * 0.60;
	ptax = assmv * 0.0075;
	cout << "Your Actual Value is: " << actv << endl <<
	 "Assessment value: " << assmv << endl << "Property Tax: " << ptax << endl;
	return 0;
} 
