# include <iostream>
using namespace std;

// Exercise 1.01
// Write a program that asks the user to type 10 integers and writes the sum of these integers.

int main()
{
	int sumOfIntegers = 0;
	cout << "Please Enter 10 integers to sum up" << endl;

	for (int i = 1; i < 11; i++) //ask 10 times for integer
	{
		int addInteger;
		cout << i << " of 10" << endl;
		cin >> addInteger;
		//some evaluation could be put in here
		sumOfIntegers += addInteger;
	}

	//display sum of integers
	cout << "Sum of your 10 integers is " << sumOfIntegers << endl;

	//wait for action before closing the window
	cout << "Press ENTER to Exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}
