# include <iostream>
using namespace std;

// Exercise 1.04
// Write a program that asks the user to type 10 integers and writes out the minimum value

int main()
{
	int nIntArray[10];
	
	// integer input section
	cout << "Please enter 10 integers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << (i + 1) << " of 10: ";
		cin >> nIntArray[i];
	}

	int smallest = nIntArray[0];

	// finding smallest value
	for (int i = 0; i < 10; i++)
	{
		if (nIntArray[i] < smallest)
		{
			smallest = nIntArray[i];
		}
	}

	//display smallest value
	cout << "Smallest entered value is " << smallest << endl;


	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}