# include <iostream>
using namespace std;

// Exercise 1.07
// Write a program that contains a function that calculates the factorial of a number. The function must take a single integer parameter and return an integer.
// Write the rest of the program to test the function.
// Amend the program to list the first 20 factorial numbers.
// Is there a problem with this ? - RESULT IS OUT OF INTEGER RANGE, works with 64bit "long long int"
// Amend the program so that it asks the user for a number, and if the number is in range 1 to 17 calculate the factorial.
// WARNING! On 32bit long int last true result is for factorial of 13!
// If the user enters zero, terminate the program.If the number is greater than 17 then display an error message and ask again.

long int calculateFactorial(int factorialOf)
{
	long int factorialResult = 1;
	for (int i = 1; i <= factorialOf; i++)
	{
		factorialResult *= i;
		// cout << "factorial of " << i << " is " << factorialResult << endl;
	}

	return factorialResult;
}

int main()
{
	int userChoice;
	//enter number to calculate factorial
	do {
		cout << "Please enter a number to calculate factorial of: (0 - to quit) ";
		cin >> userChoice;
		if (userChoice > 13 || userChoice < 0)
		{
			cout << "Number out of range, try again (1-13) \n";
		}
		else if (userChoice == 0)
		{
			break;
		}
		else
		{
			cout << endl << "FACTORIAL OF " << userChoice << " is " << calculateFactorial(userChoice) << endl;
		}
	} while (userChoice);

	cout << "\nBye, bye!" << endl;

	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}