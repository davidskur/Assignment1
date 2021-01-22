#ifndef _TRAPEZOID
#define _TRAPEZOID

#include <iostream>
#include "Shape.h"

using namespace std;

class Trapezoid : public Shape {
private:
	double base1, base2, height;
public:
	Trapezoid(double base1, double base2, double height) { // parameterized constructor
		this->base1 = base1;
		this->base2 = base2;
		this->height = height;
	}
	double getArea() { // exposed public method to calculate area
		if (isValidShape(base1, base2, height))
			return (0.5) * (base1 + base2) * height;
		return 0;
	}
	void printInfo() { // override base class 
		cout << "\nObject Type: Trapezoid";
		cout << "\nArea: " << getArea() << "\n";
	}
};
#endif
