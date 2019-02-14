#include <iostream>
using namespace std;
bool isPrime (int );
int main()
{
	bool result;
	int num;
	cout << "Input an integer to determine if the integer is a prime number" << endl;
	cin >> num;
	result = isPrime(num);
	if (result == true)
		cout << num << " is a Prime Number." << endl;
	else 
		cout << num << " is not a Prime Number." << endl;
	return 0;
}
bool isPrime (int num)
{
	bool r;
	if (num > 3)
	{
		for (int i = 2; i <= (num / 2); i++)
		{
		if (!((num % i) == 0))
			r = true;
		else
		{
		r = false;
			break;
		}
		}
	}
	else
	{
		r = true;
	}
	return r;
}