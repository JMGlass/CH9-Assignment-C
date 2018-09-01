// Myles Glass
// C Programming
// Chapter 9 Assignment 1
// Ch9 Assignment 1.cpp
// This program can compute multiple geometric equations
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

ofstream RESULTS;
double Pi = 3.1416;

int Menu()
{
	int choice;

	cout << "1 Compute area of a square" << endl;
	cout << "2 Compute area of a rectangle" << endl;
	cout << "3 Compute hypotenuse of a right triangle" << endl;
	cout << "4 Compute area of a right triangle" << endl;
	cout << "5 Compute area of a isosceles triangle" << endl;
	cout << "6 Compute the circumference of a circle" << endl;
	cout << "7 Compute area of a circle" << endl;
	cout << "8 Compute volume of a sphere" << endl;
	cout << "99 to stop program" << endl;
	cout << "Enter your choice ";
	cin >> choice;
	return choice;
}
double areaofsquare(double side)
{
	return side*side;
}
double areaofrectangle(double length, double width)
{
	return length*width;
}
double hypotenuse(double adjacent, double opposite)
{
	return sqrt(adjacent*adjacent + opposite*opposite);
}
double arearighttriangle(double side1, double side2)
{
	return side1*side2 / 2;
}
double areaisoscelestriangle(double side1, double side2)
{
	return side1*side2 / 2;
}
double circumferenceofcircle(double radius)
{
	return 2 * radius * Pi;
}
double areaofcircle(double radius)
{
	return radius * radius * Pi;
}
double volumeofsphere(double radius)
{
	return 4 * radius * radius * radius * Pi / 3;
}
int option = 0;
int main()
{
	RESULTS.open ("G:\\RESULTS.txt");
	double side1 = 0;
	double side2 = 0;
	double length = 0;
	double width = 0;
	double adjacent = 0;
	double opposite = 0;
	double radius = 0;
	while (option != 99)
	{
		option = Menu();    //return of menu will be assigned to option
		if (option == 1)
		{
			cout << "Enter the length of the side ";
			cin >> side1;
			RESULTS << setprecision(2) << fixed << "The area of the square is " << areaofsquare(side1) << endl << endl;
		}
		else
			if (option == 2)
			{
				cout << "Enter the length of the rectangle ";
				cin >> length;
				cout << "Enter the width of the rectangle ";
				cin >> width;
				RESULTS << setprecision(2) << fixed << "The area of the rectangle is " << areaofrectangle(length, width) << endl << endl;
			}
			else
				if (option == 3)
				{
					cout << "Enter the length of the adjacent side ";
					cin >> adjacent;
					cout << "Enter the length of the opposite side ";
					cin >> opposite;
					RESULTS << setprecision(2) << fixed << "The hypotenuse of the triangle is " << hypotenuse(adjacent, opposite) << endl << endl;
				}
				else
					if (option == 4)
					{
						cout << "Enter the length of the first side ";
						cin >> side1;
						cout << "Enter the length of the second side ";
						cin >> side2;
						RESULTS << setprecision(2) << fixed << "The area of the right triangle is " << arearighttriangle(side1, side2) << endl << endl;
					}
					else
						if (option == 5)
						{
							cout << "Enter the height ";
							cin >> side1;
							cout << "Enter the base ";
							cin >> side2;
							RESULTS << setprecision(2) << fixed << "The area of the isosceles triangle is " << areaisoscelestriangle(side1, side2) << endl << endl;
						}
						else
							if (option == 6)
							{
								cout << "Enter the radius ";
								cin >> radius;
								RESULTS << setprecision(2) << fixed << "The circumference of the circle is " << circumferenceofcircle(radius) << endl << endl;
							}
	else
		if (option == 7)
		{
		cout << "Enter the radius ";
		cin >> radius;
		RESULTS << setprecision(2) << fixed << "The area of the circle is " << areaofcircle(radius) << endl << endl;
		}
		else
			if (option == 8)
			{
			cout << "Enter the radius ";
			cin >> radius;
			RESULTS << setprecision(2) << fixed << "The area of the circle is " << volumeofsphere(radius) << endl << endl;
			}
	}

	RESULTS.close();
	return 0;
}

