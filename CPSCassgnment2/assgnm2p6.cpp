#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Put in your last 5 test scores." << endl;
	double t1, t2, t3, t4, t5;
	cin >> t1 >> t2>> t3 >> t4 >> t5;
	cout << "Your Average Score is: " << setprecision(3) << (t1 + t2 + t3 + t4 + t5) / 5 << endl;
	return 0;
}
