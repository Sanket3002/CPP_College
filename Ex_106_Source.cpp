# include <iostream>
using namespace std;

// Exercise 1.06
// Write a program that is able to perform some operations depending on the value of an input integer. The program writes the value of the integer and writes the following menu :
//		Add two numbers
//		Subtract two numbers
//		Multiply two numbers
//		Quit
// If anything but 4 (quit)is entered, the program asks for two numbers and performs the corresponding action and displays the result.
// One the result has been computed, the menu is displayed again.
// The program should only finish when quit has been selected.

int fstNumber, sndNumber, userChoice;

int showMenu() // function that displays menu and asks for option
{
	cout << "------------------------ \n"
		<< "1. Add two numbers \n"
		<< "2. Subtract two numbers \n"
		<< "3. Multiply two numbers \n"
		<< "4. Quit \n"
		<< "Select: ";
	cin >> userChoice;

	return userChoice;
}

int askForIntegers() // function asking for integers
{
	// some evaluation could be added in the loop
	cout << "Please enter first integer: ";
	cin >> fstNumber ;
	cout << "Please enter second integer: ";
	cin >> sndNumber ;
	
	return fstNumber, sndNumber;
}

int main()
{
	
	do {
		showMenu();
				
		switch (userChoice)
		{
		case 1: // adding numbers
			askForIntegers();
			cout << fstNumber << " + " << sndNumber << " = " << fstNumber + sndNumber << '\n' << endl;
			break;
		case 2: // substracting numbers
			askForIntegers();
			cout << fstNumber << " - " << sndNumber << " = " << fstNumber - sndNumber << '\n' << endl;
			break;
		case 3: // multiplying numbers
			askForIntegers();
			cout << fstNumber << " x " << sndNumber << " = " << fstNumber * sndNumber << '\n' << endl;
			break;
		case 4: //saying bye bye
			cout << "Bye, bye! \n" << endl;
			break;
		default: //in case of undefined option, simplified evaluation as default state
			cout << "Invalid option selected \n" << endl;
			break;
		}

	} while (userChoice != 4);

	

	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}