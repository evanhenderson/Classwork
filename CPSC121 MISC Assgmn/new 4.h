#include <iostream>
using namespace std;
int main()
{
	const int NUM_FISH = 20;
	int fish [NUM_FISH];
	for (int i = 0; i < NUM_FISH; i++)
	{
		cout << "How many fish did fisherman " << i + 1 << " catch?" << endl;
		cin >> fish[i];
	}
	return 0;	
}







double getLowest( double array[], int size)
{
	double lowest;
	for (int i = 0; i < size; i++)
	{
		if (i = 0)
		{
			lowest = array[0];
		}
		else if (array[i] < lowest)
			lowest = array[i];
	}
	return lowest;
}