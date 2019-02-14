/* 
Class: CPSC 122-01
Team Member 1: August Ottens
Team Member 2: Evan Henderson
Submitted by: August Ottens
GU Username: jottens
File Name: Proj2.cpp
Program contains functions to alphabetically compare cstrings and copy one cstring into another
To Build: g++ Proj2.cpp
To Execute: ./a.out fileName.txt
*/
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
/* pre: Both str1 and str2 are C-string
post: returns -1 if str1 appears before str2 in an alphabetical ordering
returns 0 if str1 and str2 are equivalent
retunrs 1 if str2 comes before str1 alphabetically */
int my_strcmp(char* str1, char* str2)
{
	int result;
	int shortest;
	
	if (strlen(str1) < strlen(str2))
		shortest = strlen(str1);
	else if (strlen(str1) > strlen(str2))
		shortest = strlen(str2);
	else
		shortest = strlen(str1);
	
	for (int i = 0; i < shortest; i++)
	{
			if (str1[i] < str2[i])
				return -1;
			
			else if (str1[i] >str2[i])
				return 1;
			
			else
				result = 0;
	}
	if (result == 0 && strlen(str1) != strlen(str2))
	{
		if (strlen(str1) < strlen(str2))
			return -1;
		else
			return 1;
	}
	return result;
} 

/* pre: str1 is a character array at least as large as str2 + 1
post: str1 has been copied into str2. A pointer for str2 is returned*/
char* my_strcpy(char* str1, char* str2)
{
	
	for(int i = 0; i < strlen(str1); i++)
		str1[i] = str2[i];
	
	char* pointer = str1;
	
	return pointer;
}