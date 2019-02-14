#include <iostream>
using namespace std;
int main()
{
	char answers[20] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
	char studentanswers[20];
	int numC = 0, numI = 0;
	int incquestions[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter the Students' answer for question #" << i+1 << "." << endl;
		cin >> studentanswers[i];
		if (studentanswers[i] == answers[i])
			numC++;
		if (studentanswers[i] != answers[i])
		{
			numI++;
			incquestions[i] = i+1;
		}
	}
	if (numC >= 15)
		cout << "The student passed the written exam." << endl;
	else
		cout << "The student did not pass the written exam." << endl;
	cout << "The student answered " << numC << " questions correctly," << endl << " and had " << numI << " wrong answers." << endl;
	cout << "The student got the following questions incorrect: ";
	for (int i = 0; i < 20; i++)
	{
		if (incquestions[i] != 0)
			cout << incquestions[i] << " ";
	}
	cout << endl;
	return 0;
}