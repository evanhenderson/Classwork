#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int x, count=0, sum=0, avg;
	ifstream file;
	file.open("Random.txt");
	while(file >> x)
	{
		sum += x;
		count++;
		
	}
	avg = sum / count;
	cout << count << endl << sum << endl << avg << endl;
	file.close();
	return 0;
}
