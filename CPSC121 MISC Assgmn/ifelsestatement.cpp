#include <iostream>
using namespace std;
int main()
{
	int sales;
	double com;
	cout << "Input the value of Sales to see your Commission Rate."<< endl;
	cin >> sales;
	if (sales < 10000)
	{
		com = 0.10;
	}
	else if (sales <= 15000)
	{
		com = 0.15;
	}
	else if (sales > 15000)
	{
		com = 0.20;
	}
	cout << "Commission Rate: " << com << endl;
	return 0;
}
