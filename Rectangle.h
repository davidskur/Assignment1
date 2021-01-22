#ifndef _RECTANGLE
#define _RECTANGLE

#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
private:
	double base, height, depth;
public:
	Rectangle(double base, double height, double depth) { // parameterized constructor
		this->base = base;
		this->height = height;
		this->depth = depth;
	}
	double getVolume() { // exposed public method to calculate volume
		if (isValidShape(base, height, depth))
			return base * height * depth;
		return 0;
	}
	void printInfo() { // override base class 
		cout << "\nObject Type: Rectangle";
		cout << "\nVolume: " << getVolume() << "\n";
	}
};
#endif
