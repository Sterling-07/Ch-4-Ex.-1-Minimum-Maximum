//File Name: Chapter 4 - Minimum/Maximum
//Programmer: Philip Rodgers
//Date: September 2025
//Requirements: Create a program that allows the user to enter two numbers and can determine which one is larger and which one is smaller. 

#include <iostream>
using namespace std;

int main()
{
	//Create necessary variables
	int a, b;
	
	//Prompt the user to enter the first and second number
	cout << "Enter your first number: \n";
	cin >> a;
	cout << "Enter your second number: \n";
	cin >> b;

	//Determine whether a is larger, smaller, or equal to b and display the result
	if (a > b)
	{
		cout << a << " is larger than " << b;
	}
	else if (a < b)
	{
		cout << b << " is larger than " << a;
	}
	else
	{
		cout << a << " is equal to " << b;
	}
}

