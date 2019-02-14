#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	string city;
	cout << "Please enter your name" << endl;
	getline(cin, name);
	cout << "Please enter where you live" << endl;
	getline(cin, city);
	cout << "Hello " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}