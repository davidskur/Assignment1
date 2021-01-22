#ifndef _TRIANGLE
#define _TRIANGLE

#include <cmath>
#include "Shape.h"

using namespace std;

class Triangle : public Shape {
private:
	double side1, side2;
	bool isValidShape(double dim1, double dim2) { // override base class implementation
		if (side1 <= 0 || side2 <= 0) return false;
		return true;
	}
public:
	Triangle(double side1, double side2) { // parameterized constructor
		this->side1 = side1;
		this->side2 = side2;
	}
	double getHypotenuse() { // exposed public method to calculate hypotenuse
		if (isValidShape(side1, side2)) return hypot(side1, side2);
		return 0;
	}
	void printInfo() { // override base class 
		cout << "\nObject Type: Triangle";
		cout << "\nHypotenuse: " << getHypotenuse() << "\n";
	}
};
#endif
