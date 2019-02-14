#include <iostream>
using namespace std;
void getNumber (int &num)
{
	do 
	{
	cout << "Enter a number between 1 and 100." << endl;
	cin >> num;
	}while (num < 1 || num > 100);
	
}
int main()
{
	int num;
	getNumber(num);
	cout << num << endl;
	return 0;
}