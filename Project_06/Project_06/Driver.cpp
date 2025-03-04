/*
* Author: Westley Case & Morgan Allred
* Assignment: Project 6
* File: Driver.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: March 12th 2015
* Description: Finds one string inside another
*
* I declare the the following source code was written by Wes and Morgan,
* I understand the copying of any source code in whole or in part constitutes cheating,
* and I will recieve a 0 on this assignment if I violate this policy
*/

#include "Driver.h"

int main()
{
	// ----local vars---- //
	string str1;
	string str2;

	// getting console input
	cout << "This Program will find the occurence of one string inside another." << endl << endl;
	cout << "Enter the string to be searched:  ";
	getline(cin, str1);

	// get the whole string/sentance entered by user
	cout << "Now enter the string you want to search for:  ";
	getline(cin, str2);

	int idx = index_of(str1, str2);

	// Console output
	if (idx == ERROR_ONE)
	{
		cout << "String 2 must be shorter in length than string 1" << endl;
		system("pause");
		return 0;
	}
	if (idx == ERROR_TWO)
	{
		cout << "The string was not found." << endl;
		system("pause");
		return 0;
	}
	else
	{
		cout << "The index of substring is = " << idx << endl;
		system("pause");
		return 0;
	}
}

// non recursive but will call its recursive helper function.
int index_of(string s, string t)
{
	// locate the first instance of the string t within the string s
	// return the index of the starting position in s where this substring occurs.
	// if not found, handle it and return -1 for the calling method to handle

	if (s.length() < t.length())
		return ERROR_ONE;

	return index_ofH(s, t, 0);
}

int index_ofH(string str1, string str2, int i)
{
	if ((i + str2.length()) > str1.length())
	{
		return ERROR_TWO;
	}

	if (str1.substr(i, str2.length()) == str2)
	{
		return i;
	}
	else
	{
		i++;
		return index_ofH(str1, str2, i);
	}
}

