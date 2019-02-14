#include <iostream>
using namespace std;
int main()
{
	// inputs
	
	double length, width, height, volume, cost, cprice, profit;
	cout << "Input the length, width, and height, in that order, of the desired crate size.\n";
	cin >> length >>  width >> height;
	
	// math
	volume = length * width * height;
	cost = volume * 0.23;
	cprice = volume * 0.50;
	profit = cprice - cost;
	cout <<"Volume: " << volume << endl <<"Cost: " << cost << endl <<"Customer Price: " << cprice << endl << "Profit: " << profit << endl;
	return 0;
}


