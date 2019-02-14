#include <iostream>
using namespace std;
void display(int array[], int size, int n)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] > n)
			cout << array[i] << " ";
	}
}