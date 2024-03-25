/*
In this code, we will get value for 3 corners of triangle and then we will check triangle type according to corners value

Developer: Barış Someroğlu
Date: 25.03.2024 / 11:50 pm
*/

#include <iostream>

using namespace std;

// Function prototype
void TriangleType(double, double, double);

int main()
{
	double Corner1, Corner2, Corner3;

	// Getting value from user
	cout << "Please Enter 1. Corner of Triangle: ";
	cin >> Corner2;

	cout << "Please Enter 2. Corner of Triangle: ";
	cin >> Corner1;

	cout << "Please Enter 3. Corner of Triangle: ";
	cin >> Corner3;

	cout << "\n";

	// Call the function
	TriangleType(Corner1, Corner2, Corner3);

	return 0;
}

// Function definition
void TriangleType(double Corner1, double Corner2, double Corner3)
{
	if (Corner1 == Corner2 && Corner2 == Corner3)
	{
		cout << "This is a Equilateral Triangle!";
	}

	else if (Corner1 == Corner2 || Corner1 == Corner3 || Corner2 == Corner3)
	{
		cout << "This is a Twin Side Triangle!";
	}

	else
	{
		cout << "This is a Variety Edge Triangle!";
	}

	cout << "\n";
}
