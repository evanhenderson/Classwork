#include <iostream>
using namespace std;
void getScore(int &t);
void calcAverage(int t1, int t2, int t3, int t4, int t5);
int findLowest(int t1, int t2, int t3, int t4, int t5);
int main()
{
	int test1, test2, test3, test4, test5;
	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);
	calcAverage(test1, test2, test3, test4, test5);
	return 0;
}
void getScore(int &t)
{
	cout << "Please input a test score." << endl;
	cin >> t;
	while (t < 1 || t > 100)
	{	
		cout << "Please input a valid test score." << endl;
		cin >> t;
	}

}
void calcAverage(int t1, int t2, int t3, int t4, int t5)
{
	int min;
	double Avg;
	min = findLowest(t1, t2, t3, t4, t5);
	Avg = (t1 + t2 + t3 + t4 + t5 - min)/4.0;
	cout << Avg << endl;
}
int findLowest(int t1, int t2, int t3, int t4, int t5)
{
	if (t1 <= t2 && t1 <= t3 && t1 <= t4 && t1 <= t5)
		return t1;
	else if (t2 <= t1 && t2 <= t3 && t2 <= t4 && t2 <= t5)
		return t2;
	else if (t3 <= t1 && t3 <= t2 && t3 <= t4 && t3 <= t5)
		return t3;
	else if (t4 <= t1 && t4 <= t2 && t4 <= t3 && t4 <= t5)
		return t4;
	else if (t5 <= t1 && t5 <= t2 && t5 <= t3 && t5 <= t4)
		return t5;
}