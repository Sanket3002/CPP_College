# include <iostream>
using namespace std;

// Exercise 1.02
// Write a program that asks the user to type 10 integers prints them out in reverse order.
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

	// integer output section (reverse)
	for (int i = 9; i > -1; i--)
	{
		cout << nIntArray[i] << " ";
	}
	
	cout << endl;

	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}