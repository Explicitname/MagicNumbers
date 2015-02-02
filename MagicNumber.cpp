/*
 * MagicNumber.cpp
 *
 *  Created on: Jan 22, 2015
 *      Author: SGT Roy
 *
 *      This program compares integers to the original magic number entry and then calculates the average and outputs that result.
 */

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()

{
	int vectTotal = 0; // The total of all integers in the vector.
	int magicNum = 0; // The magic number, chosen by the input of the user.
	int validInput = 0; // The integer, from 0-9, entered by the user for each iteration of the loop.
	int magicNumCount = 0; // The integer count of magic number occurrences.
	vector<int> magicNumsVect; // Vector to save all the inputs from the user from each iteration of the loop.
	bool cont = true; // Check condition for initial error checking loop.


	while (cont)
	{
	cout << "Enter your integer, from 0-9, to serve as the 'Magic Number': ";
	cin >> magicNum;
	cout << endl;

	if (!magicNum)
	{
		cout << "Invalid input. Please try again." << endl;
		cin.clear();
		cin.ignore();
	}
	else if (magicNum < 10 && magicNum > -1)
		{
		cout << "Shouldn't make it here with errors.";
		cont = false;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << "Please enter a number, as an integer, from 0-9: ";
		cin >> validInput;
		cout << endl;
		if (validInput < 10 && validInput > -1) {
			magicNumsVect.push_back(validInput);
			vectTotal += magicNumsVect[i];
			if (validInput == magicNum) {
				magicNumCount++;
			}
		} else {
			cout << "Invalid Input. Please enter a valid integer from 0-9"
					<< endl;
			i--;
		}

	}

	cout << "The number of times the 'Magic Number' was entered: "
			<< magicNumCount << endl;
	cout << "The average of all valid entries was: "
			<< vectTotal / 10.0 << endl;

	return (0);
}
