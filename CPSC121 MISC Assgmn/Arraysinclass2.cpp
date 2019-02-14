#include <iostream>
#include <string>
using namespace std;
void grades(int array[][4], int size = 5)
{
	char letterGrades[5] = {'A', 'B', 'C', 'D', 'F'};
	string student[5];
	
	for (int count = 0; count < 5; count++)
	{
		cout << "What is student " << count + 1 << "'s name?";
		getline(cin, student[count]);
	}
	for (int x = 0; x < size; x++)
	{
		int total = 0;
		cout << "What is " << student[x] << "'s test scores?" << endl;
		for (int y = 0; y < 4; y++)
		{
			do
			{	
				cout << "Test #" << y + 1 << ": ";
				cin >> array[x][y];
			}while (array[x][y] < 0 || array[x][y] > 100);
			total += array[x][y];
		}
		int avg = total / 4;
		cout << avg << " ";
		if (avg >= 90)
			cout << letterGrades[0] << endl;
		else if (avg < 90 && avg >= 80)
			cout << letterGrades[1] << endl;
		else if (avg < 80 && avg >= 70)
			cout << letterGrades[2] << endl;
		else if (avg < 70 && avg >= 60)
			cout << letterGrades[3] << endl;
		else 
			cout << letterGrades[4] << endl;
	}
}
int main()
{

	int array[5][4];
	grades(array);
	return 0;
}
