#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double i1, i2, i3, i4, i5, stax;
	i1 = 15.95;
	i2 = 24.95;
	i3 = 6.95;
	i4 = 12.95;
	i5 = 3.95;
	stax = 0.07;
	cout << "Each Items price: " << i1 << ", " << i2 << ", " << i3 << ", " << i4 << ", " << i5 << endl << "Subtotal: " << setprecision(4) << i1 + i2 + i3 + i4 + i5 << endl << "Sales Tax: " << setprecision(3) << (i1 + i2 + i3 + i4 + i5) * stax << endl << "Total: " << setprecision(4) << (i1 + i2 + i3 + i4 + i5) + stax * (i1 + i2 + i3 + i4 + i5) << endl;
	return 0;
}
