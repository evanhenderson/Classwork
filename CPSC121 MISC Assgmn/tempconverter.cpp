/*

Converting Fahrenheit to Celsius -- C = 5/9*(F-32)

F - Fahrenheit temp
C - Celsius temp
function Celsius accepts the Fahrenheit temp and return Celsius temp
demonstrate function by displaying a table by using a loop that will show 
the temps in Fahrenheit and 
Celsius for Fahrenheit temps 0-20

*/
#include <iostream>
using namespace std;
const double frac = 5.0/9.0;
double Celsius (double F)
{
	double C;
	C = frac*(F-32);
	return C;
}
int main()
{
	for (int i=1; i <= 20; i++)
	{	
		cout << i << " Degrees Fahrenheit equals " << Celsius(i) << " Degrees Celsius" << endl;
	}
	return 0;
}
