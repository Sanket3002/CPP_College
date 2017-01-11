# include <iostream>
using namespace std;

// Exercise 1.03
// Write a program that asks the user to type 10 integers and writes out the maximum value

int main()
{
	int nIntArray[10];
	int biggest = 0;

	// integer input section
	cout << "Please enter 10 integers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << (i + 1) << " of 10: ";
		cin >> nIntArray[i];
	}

	// finding biggest value
	for (int i = 0; i < 10; i++)
	{
		if (nIntArray[i] > biggest)
		{
			biggest = nIntArray[i];
		}
	}

	//display biggest value
	cout << "Highest entered value is " << biggest << endl;


	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}