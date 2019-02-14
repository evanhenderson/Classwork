#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int s1, s2, s3, s4, s5, s1a, s2a, s3a, s4a, s5a;
	cout << "Enter today's sales for store 1" << endl;
	cin >> s1;
	cout << "Enter today's sales for store 2" << endl;
	cin >> s2;
	cout << "Enter today's sales for store 3" << endl;
	cin >> s3;
	cout << "Enter today's sales for store 4" << endl;
	cin >> s4;
	cout << "Enter today's sales for store 5" << endl;
	cin >> s5;
	ofstream file;
	file.open ("sales.txt");
	file << "Enter today's sales for store 1: " << s1 << endl;
	file << "Enter today's sales for store 2: " << s2 << endl;
	file << "Enter today's sales for store 3: " << s3 << endl;
	file << "Enter today's sales for store 4: " << s4 << endl;
	file << "Enter today's sales for store 5: " << s5 << endl;
	file << "SALES BAR CHART" << endl << "(Each * = $100)" << endl;
	s1a = s1/100;
	s2a = s2/100;
	s3a = s3/100;
	s4a = s4/100;
	s5a = s5/100;
	file << "Store 1: ";
	for (int i = 0; i < s1a; i++)
	{
		file << "*";
	}
	file << endl << "Store 2: ";
	for (int i = 0; i < s2a; i++)
	{
		file << "*";
	}
	file << endl << "Store 3: ";
	for (int i = 0; i < s3a; i++)
	{
		file << "*";
	}
	file << endl << "Store 4: ";
	for (int i = 0; i < s4a; i++)
	{
		file << "*";
	}
	file << endl << "Store 5: ";
	for (int i = 0; i < s5a; i++)
	{
		file << "*";
	}
	file.close();
	return 0;
}