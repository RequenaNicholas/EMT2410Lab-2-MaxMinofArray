//============================================================================
// Name        : Lab2OrganizeAlgorithm.cpp
// Author      : Nicholas Requena
// Version     : v0.2
// Description : An Algorithm that find the Max. and Min. values in an
//				 input given array.
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float MyNums[4];					//Containers for user numbers.
	float MyMax, MyMin;
	int userNumber;


	//Assign input numbers, to each of the 5 positions, in the array.

	cout << "Enter 5 numbers to be used in the array.\n";				//Directions prompt

	for (int j = 0; j < 5; j++)
	{
		cout << "Enter number for array position " << j << ".\n";		//Display the position for the array
		cin >> MyNums[j];			//Assign the number entered to the position, in the array.
	}
	cout << "\n";


	//Use position 0 of the entered values, as the default position.

	MyMax = MyMin = MyNums[0]; 		//Temporary values assigned to MyMax and MyMin.

	for (int i=1; i<5; i++)			//Repeat 5 times, for each number in the array
	{
		if (MyNums[i] > MyMax)		//Put new higher number in MyMax
			MyMax = MyNums[i];

		else if (MyNums[i] < MyMin) //Put new lowest number in MyMin
			MyMin = MyNums[i];
	}



	//Asks the user to input 0 or 9, to display the Minimum, or Maximum value of the array respectively.

	cout << "Type '9' to view the highest number.\nType '0' to view the lowest number.\n";
	cin >> userNumber;		//Assigns userNumber to the user's input.

	switch (userNumber) 	//Respond with the MyMax and MyMin values when 0 or 9 is typed.
	{
		case 9:				//When 9 is typed, print MyMax.
			cout << "The Highest number in the array is: " << MyMax;
			break;

		case 0:				//When 0 is typed, print MyMin.
			cout << "The Lowest number in the array is: " << MyMin;
			break;

		default:			//When neither 0 or 9 is typed, default the this printed statement.
			cout << "You typed a wrong value. Restart the program and try again.";
			break;
	}


	return 0;
}
