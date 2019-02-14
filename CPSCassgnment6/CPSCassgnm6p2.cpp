#include <iostream>
#include <cstring>
using namespace std;
double getSales(string );
void findHighest(double , double , double , double );
int main()
{
	cout << "This program determines and outputs the highest grossing sales division.\n"; 
	string ne, se, nw, sw;
	ne = "Northeast Division";
	se = "Southeast Division";
	nw = "Northwest Division";
	sw = "Southwest Division";
	findHighest(getSales(ne), getSales(se), getSales(nw), getSales(sw));
	return 0;
}
double getSales(string s)
{
	double fig;
	cout << "What is the " << s << "'s quarterly sales figure." << endl;
	cin >> fig;
	while (fig < 0.00)
	{	
		cout << "The figure cannot be less that $0.00" << endl;
		cin >> fig;
	}
	return fig;
}
void findHighest(double ne, double se, double nw, double sw)
{
	if (ne > se && ne > nw && ne > sw)
	{	
		cout << "The highest grossing division is the Northeast Division with $" << ne << " in sales." << endl;
	}	
	else if (se > ne && se > nw && se > sw)
	{
		cout << "The highest grossing division is the Southeast Division with $" << se << " in sales." << endl;
	}
	else if (nw > sw && nw > ne && nw > se)
	{
		cout << "The highest grossing division is the Northwest Division with $" << nw << " in sales." << endl;
	}
	else if (sw > ne && sw > se && sw > nw)
	{
		cout << "The highest grossing division is the Southwest Division with $" << sw << " in sales." << endl;
	}
	else 
		cout << "There was a tie and/or an error has occurred" << endl;
}