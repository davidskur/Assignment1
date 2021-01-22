#include <iostream>
#include <vector>

#include "Triangle.h"
#include "Trapezoid.h"
#include "Rectangle.h"

using namespace std;

// function declaration
void displayWelcome();
double checkInput(string prompt);

int main() {

	// adding sequence containers of each object type
	vector<Triangle> triVec;
	vector<Trapezoid> trapVec;
	vector<Rectangle> rectVec;

	// main program loop
	bool runAgain;
	do {
		runAgain = false;
		displayWelcome(); // for readability

		// get user input
		int selection;
		cin >> selection;

		// decision logic
		switch (selection) {
		case 1: // triangle
		{
			double side1, side2;
			cout << "\n--- Calculate a Hypotenuse ---\n";
			side1 = checkInput("\nEnter triangle side 1: ");
			side2 = checkInput("Enter triangle side 2: ");

			// Create a new triangle object and add it to the collection
			Triangle triangle(side1, side2);
			triVec.push_back(triangle);

			double hypot = triangle.getHypotenuse();
			if (hypot > 0)
				cout << "\nThe hypotenuse of the created right triangle is " << hypot << "\n";
			else
				cout << "\nSupplied dimensions do NOT a triangle make!";
			break;
		}
		case 2: // trapezoid
		{
			double base1, base2, height;
			cout << "\n--- Calculate Trapezoid Area---\n";
			base1 = checkInput("\nEnter base length: ");
			base2 = checkInput("Enter a parallel base length: ");
			height = checkInput("Enter the trapezoid's height: ");

			// Create a new trapezoid object and add it to the collection
			Trapezoid trapezoid(base1, base2, height);
			trapVec.push_back(trapezoid);

			double area = trapezoid.getArea();
			if (area > 0)
				cout << "\nThe area of the created trapezoid is " << area << "\n";
			else
				cout << "\nSupplied dimensions cannot be used to make a trapezoid!\n";
			break;
		}
		case 3: // volumetric? rectangle
		{
			double length, height, depth;
			cout << "\n--- Calculate Rectangle Volume---\n";
			length = checkInput("\nEnter the shape's length: ");
			height = checkInput("Enter the shape's height: ");
			depth = checkInput("Enter the shape's depth: ");

			// Create a new rectangle object and add it to the collection
			Rectangle rectangle(length, height, depth);
			rectVec.push_back(rectangle);

			double volume = rectangle.getVolume();
			if (volume > 0)
				cout << "\nThe volume of the rectangle is " << volume << "\n";
			else
				cout << "\nSupplied dimensions cannot be used to make a rectangle!\n";
			break;
		}
		case 4:
		{
			cout << "\n----------- Triangles -----------\n";
			cout << "\nTriangle Collection Size: " << triVec.size();
			for (Triangle tri : triVec)
				cout << "\nTriangle Hypotenuse: " << tri.getHypotenuse() << "\n";

			cout << "\n----------- Trapezoids -----------\n";
			cout << "\nTrapezoid Collection Size: " << trapVec.size();
			for (Trapezoid trap : trapVec)
				cout << "\nTrapezoid Area: " << trap.getArea() << "\n";

			cout << "\n----------- Rectangles -----------\n";
			cout << "\nRectangle Collection Size: " << rectVec.size();
			for (Rectangle rect : rectVec)
				cout << "\nRectangle Volume: " << rect.getVolume() << "\n";
			break;
		}
		default:
			cout << "\nUnknown selection!";
			break;
		} // end switch

		// check for another run
		string response;
		cout << "\nRun again? ";
		cin >> response;
		if (response == "y" || response == "yes") runAgain = true;

	} while (runAgain); // end do-while

	return 0; // end main
}

// functions
double checkInput(string prompt) {
	string input;
	cout << prompt;
	cin >> input;
	return strtod(input.c_str(), NULL); // strtod doesn't throw exceptions
}
void displayWelcome() {

	cout << "\n|=======================|\n";
	cout << "|~~~~ Shape Creator ~~~~|\n";
	cout << "|=======================|\n";
	cout << "\nMake a selection:\n \n1) Triangle\n2) Trapezoid\n3) Rectangle\n4) Browse collection\n";
	cout << "\nSelection: ";
}
