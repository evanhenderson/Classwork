#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int count=0, sum=0, avg, x;
	ifstream file;
	file.open("Random.txt");
	while(file >> x)
	{
		sum += x;
		count++;
		
	}
	avg = sum / count;
	cout << count << sum << avg;
	file.close();
	return 0;
}