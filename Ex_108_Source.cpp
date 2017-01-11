# include <iostream>
using namespace std;

// Exercise 1.08
// Write a program that asks the user to enter an (integer) number and determines if the number is prime. Test the program.
// PRIME NUMBER can be divided without remainder only by 1 and itself, which means it can't be divided by 2,3,4,...,n-1

bool isPrime(int userInt)
{	
	int primeStore = 0;
	for (int i = 2; i < userInt; i++) // don't have to check for %1 and %number itself
	{
		if (userInt % i == 0)
		{
			primeStore += 1;
		}
	}
	
	if (primeStore > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int userChoice;

	do {
		cout << "Enter a number please: ";
		cin >> userChoice;
		
		if (userChoice == 0)
		{
			break;
		}
		else
		{
			if (isPrime(userChoice))
			{
				cout << userChoice << " is prime." << endl;
			}
			else
			{
				cout << userChoice << " is not prime." << endl;
			}
		}
	} while (userChoice);

	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}