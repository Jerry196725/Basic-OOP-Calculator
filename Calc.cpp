
/*

Jeremy Jun

This code is a review on the C++ language without the help of AI.

*/

#include <iostream>
#include <math.h>
using namespace std;

class Calculator
{

private:

	float var1, var2;

public:

	// This function to take input from the user.
	void result()
	{
		cout << "Enter First Number: ";
		cin >> var1;
		cout << "Enter Second Number: ";
		cin >> var2;
	}

	// Function to add two numbers
	float add()
	{
		return var1 + var2;
	}

	// Function to subtract two numbers
	float sub()
	{
		return var1 - var2;
	}

	// Function to multiply two numbers
	float mul()
	{
		return var1 * var2;
	}

	// Function to divide two numbers
	float div()
	{
		if (var2 == 0)
		{
			cout << "Division By Zero" <<
				endl;
			return INFINITY;
		}
		else
		{
			return var1 / var2;
		}
	}
};

int main()
{

	int choice;

	Calculator c;

	// A do loop is implemented if the user wants to reuse the program again but in any calculations the user pick next.
	do
	{

		cout << "OOP Basic Calculator \n";
		cout << "----------------------- \n \n";

		cout << "Enter which operations you want to do. \n";
		cout << "1: addition \n";
		cout << "2: subtraction \n";
		cout << "3: multiplication \n";
		cout << "4: division \n";
		cout << "5: Exit program \n";
		cin >> choice;

		switch (choice) {

		case(1): {

			c.result();

			cout << "Result: " << c.add() <<endl;

			break;
		}
		case(2): {

			c.result();

			cout << "Result: " << c.sub() << endl;

			break;
		}
		case(3): {

			c.result();

			cout << "Result: " << c.mul() << endl;

			break;
		}
		case(4): {

			c.result();

			cout << "Result: " << c.div() << endl;

			break;
		}
		case(5):

			return 0;

		}

	} while (choice >= 1 && choice <= 5);

	return 0;

}