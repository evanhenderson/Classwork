#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	int num, lnum, snum;
	cout << "Enter a series of Integers ending with 99 to signal the sequences end." << endl;
	cin >> num;
	lnum = num;
	snum = num;
	while (num != 99)
	{
			cin >> num;
			if (snum <= num)
				snum = num;
			else if (lnum >= num)
				num = lnum;
	}
	cout << "The Smallest Number was " << snum << endl;
	cout << "The Largest Number was " << lnum << endl;
	return 0;
}