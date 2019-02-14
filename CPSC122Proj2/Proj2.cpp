/* 
Class: CPSC 122-01
Team Member 1: August Ottens
Team Member 2: Evan Henderson
Submitted by: August Ottens
GU Username: jottens
File Name: Proj2.cpp
Program generates random prime numbers and prints them to a file named by the user in the command line
To Build: g++ Proj2.cpp
To Execute: ./a.out fileName.txt
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
/*
Pre: accepts integer argument
Determines if prime
Post: returns false if composite, true if prime
*/
bool is_Prime(int num)
{
	bool r; 
	
	if (num > 3)
	{
		for (int i = 2; i <= (num / 2); i++)
		{
			if ((num % i) != 0)
				r = true;
			else 
			{
				r = false;
				break;
			}
		}
	}
	else
		r = true;
	
	return r;
}
/*
Pre: accepts the user inputted numbers for amount of prime numbers printed and column, and a reference to the file output
generates prime numbers
Post: Prints prime numbers to file
*/ 
void print(int prime, int column, ofstream& fout)
{
	int count = 1;
	int perCol = prime / column, remnder;
	bool isPrime = false;
	
	
	for (int i = 0; i < perCol; i++)
	{
		
		for (int j = 0; j < column; j++ )
		{
			isPrime = false;
			while (isPrime == false)
			{
				isPrime = is_Prime(count);
				if (isPrime == true)
					fout << count << "\t";
				count++;
			}	
		}
		fout << endl;
	}
	isPrime = false;
	remnder = prime - (column) * perCol;
	if (remnder == 0)
		return;
	for (int k = 0; k < remnder; k++)
	{
		isPrime = false;
		while (isPrime == false)
		{
			isPrime = is_Prime(count);
			if (isPrime == true)
				fout << count << "\t";
			count++;
		}
	}
	fout << endl;
}
/*
Pre: accepts file name recieved from user and referene to file output
Post: opens file output
*/
void gfopen(char fileName[], ofstream& fout)
{
	fout.open(fileName);
}

int main(int argc, char* argv[])
{
	ofstream fout;
	int P;
	int N;
	
	gfopen(argv[1], fout);
	
	cout << "How many prime numbers would you like to print? ";
	cin >> P;
	
	cout << "Into how many columns should they be printed? ";
	cin >> N;
	
	print(P, N, fout);
	
	fout.close();
	
	return 0;
}
