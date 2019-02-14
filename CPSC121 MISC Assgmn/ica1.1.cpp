#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double rad, s, c, t;
	cout << "Input an angle in radians" << endl;
	cin >> rad;
	s = sin(rad);
	c = cos(rad);
	t = tan(rad);
	cout << "Sine of " << rad << ": " << fixed << setprecision(4) << s << endl;
	cout << "Cosine of " << rad << ": " << c << endl;
	cout << "Tangent of " << rad << ": " << t << endl;
	return 0;
}
