/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 6
* File: Driver.h
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: March 12th 2015
* Description: Finds one string inside another
*

* I declare the the following source code was written by Wes and Morgan,
* I understand the copying of any source code in whole or in part constitutes cheating,
* and I will recieve a 0 on this assignment if I violate this policy
*
*/

#include <string>
#include <iostream>

using namespace std;

//--Constant Vars--//

const int ERROR_ONE = -1;
const int ERROR_TWO = -2;

//--Constant Vars--//


// Purpose: To find a string within a second string
// Parameters: String 1 (string to look in) String 2 (string to find)
// Returns: Int (the index of the starting char of String 2
int index_of(string, string);

// Purpose: Helper function
// Paramters: Both original strings and an int for the index
// Returns: Index location of found string
int index_ofH(string, string, int);