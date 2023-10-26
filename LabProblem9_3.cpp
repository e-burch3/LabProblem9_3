/*
* File: LabProblem9_3.cpp
*
* Author: Ethan Burch
* Date: 10/26/23
* Description: says if an array of random dice rolls has run
*/


#include <iostream>
#include <ctime>

using namespace std;

void displayRun(int values[], int size);


int main(void) {
	const int NUMBER_OF_SIDES = 6;
	const int LOWEST_DIE_VALUE = 1;
	const int NUMBER_OF_DICE = 20;
	int dice[NUMBER_OF_DICE];

	/* disable RNG temporariy
	srand((unsigned)time(0)); // seed RNG

	for (int i = 0; i < NUMBER_OF_DICE; i++) 
		dice[i] = rand() % NUMBER_OF_SIDES + LOWEST_DIE_VALUE;
	*/

	for (int i = 0; i < NUMBER_OF_DICE; i++) {
		cout << "input element #" << i + 1 << ": ";
		cin >> dice[i];
	}

	displayRun(dice, NUMBER_OF_DICE);

	return 0;
}

void displayRun(int values[], int size) {

	for (int i = 0; i < size; i++) {
		if (values[i] != values[i - 1] && values[i] == values[i + 1])
			cout << '(' << values[i] << ' ';
		else if (values[i] == values[i - 1] && values[i] != values[i + 1])
			cout << values[i] << ") ";
		else
			cout << values[i] << ' ';
	}

}