#include <iostream>
#include <ctime>
using namespace std;
int coinToss()
{
	int toss = rand()%2+1;
	if (toss == 1)
		cout << "heads" << endl;
	else
		cout << "tails" << endl;
	return toss;
}
int main()
{
	srand(time(NULL));
	int heads = 0, tails = 0, tossCount = 0, numToss = 0;
	cout << "How many times do you want to toss the coin? ->";
	cin >> numToss;
	while(tossCount < numToss)
	{
		if(coinToss() == 1)
			heads++;
		else
			tails++;
		tossCount++;
	}
	cout << "\nTotal number of heads: " << heads << endl;
	cout << "\nTotal number of tails: " << tails << endl;
	return 0;
}