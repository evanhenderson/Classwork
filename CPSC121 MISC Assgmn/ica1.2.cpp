#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Input the Lengths and Widths of two Rectangles to compare Area." << endl;
	double l1, l2, w1, w2, a1, a2;
	cin >> l1 >> w1 >> l2 >> w2;
	a1 = l1 * w1;
	a2 = l2 * w2;
	if (a1 > a2)
	{
		cout << "The Area of Rectangle 1 is greater." << endl;
	}
	else if (a2 > a1)
	{	
		cout << "The Area of Recangle 2 is greater." << endl;
	}
	else
	{	
		cout << "The Area of the Rectangles are equal." << endl;
	}
	return 0;
}
