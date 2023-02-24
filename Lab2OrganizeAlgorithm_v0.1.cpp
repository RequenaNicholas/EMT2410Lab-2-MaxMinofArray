//============================================================================
// Name        : Lab2OrganizeAlgorithm.cpp
// Author      : Nicholas Requena
// Version     : v0.1
// Description : An Algorithm that find the Max. and Min. values in an
//				 array, and print the values using a switch statement.
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float MyNums[] = {1.0, 2.0, -3.4, 0.5, 50.0};
	float MyMax, MyMin; 			//Max and Min containers.

	MyMax = MyMin = MyNums[0]; 		//Temporary values assigned to MyMax and MyMin.

	for (int i=1; i<5; i++)			//Repeat 5 times, for each number in the array
	{
		if (MyNums[i] > MyMax)		//Put new higher number in MyMax
			MyMax = MyNums[i];

		else if (MyNums[i] < MyMin) //Put new lowest number in MyMin
			MyMin = MyNums[i];
	}


	int userNumber;

	cout << "Type '9' to view the highest number.\nType '0' to view the lowest number.\n";
	cin >> userNumber;	//Assigns userNumber to the user's input.

	switch (userNumber) //Respond with the MyMax and MyMin values when 0 or 9 is typed.
	{
		case 9:				//When 9 is typed, print MyMax.
			cout << MyMax;
			break;

		case 0:				//When 0 is typed, print MyMin.
			cout << MyMin;
			break;

		default:			//When neither 0 or 9 is typed, default the this printed statement.
			cout << "You typed a wrong value. Restart the program and try again.";
			break;
	}


	return 0;
}
