#ifndef _TRIANGLE
#define _TRIANGLE

#include <cmath>
#include "Shape.h"

using namespace std;

class Triangle : public Shape {
private:
	double dblSide1, dblSide2;
public:
	Triangle(double dblSide1, double dblSide2) { // parameterized constructor
		this->dblSide1 = dblSide1;
		this->dblSide2 = dblSide2;
	}
	double GetHypotenuse() { // exposed public method to calculate hypotenuse
		if (IsValidShape(dblSide1, dblSide2, 1)) return hypot(dblSide1, dblSide2);
		return 0;
	}
	void PrintInfo() { // override base class implemenation
		cout << "\nObject Type: Triangle";
		cout << "\nHypotenuse: " << GetHypotenuse() << "\n";
	}
};
#endif
