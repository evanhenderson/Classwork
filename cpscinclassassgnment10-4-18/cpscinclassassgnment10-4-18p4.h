#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream oFile("countfile.txt");
	for (int i = 1; i <= 10; i++)
		oFile << i;
	outputFile.close("countfile.txt");
	return 0;
}