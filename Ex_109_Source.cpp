# include <iostream>
using namespace std;

// Exercise 1.09
// Write a program that uses the sieve of Eratosthenes 
// (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes )
// to compute and display the prime numbers less than 100. (For the sake of this exercise zero should not be considered.)
// (In C++ the type bool is provided)

int main()
{
	// we are interested in range of integers from 1 to 99
	// first we need to create "an array of Boolean values" and initialize every element to TRUE
	bool sieveEratos[100];
	for (int i = 0; i < 100; i++)
	{
		sieveEratos[i] = true;
	}
	
	// using sieve of Eratosthenes algorithm, mark all non prime indexes as false
	for (int i = 2; i*i < 100; i++)
	{
		if (sieveEratos[i] == true)
		{
			for (int j = i * 2; j < 100; j += i)
			{
				sieveEratos[j] = false;
			}
		}
	}

	// display all TRUE indexes of array, leaving "0"
	cout << "First prime numbers with value lesser then 100, calculated using sieve or Eratosthenes \n";
	for (int i = 1; i < 100; i++)
	{
		if (sieveEratos[i])
		{
			cout << i << ", ";
		}
	}
	cout << endl;

	//wait for action before closing the window
	cout << "Press ENTER to exit..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;
}