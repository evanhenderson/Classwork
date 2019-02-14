#include <iostream>
using namespace std;
int main()
{
	double d, s;
	int t;
	cout << "Input the speed of the vehicle in mpg, then the number of hours it traveled."
	<< endl;
	cin >> s >> t;
	for (int l = 1; l <= t; l++)
	{
		d = s * l;
		cout << l << "     " << d << endl;
	}
	return 0;
}
	