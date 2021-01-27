#ifndef _TRAPEZOID
#define _TRAPEZOID

#include "Shape.h"

using namespace std;

class Trapezoid : public Shape {
private:
	double dblBase1, dbleBase2, dblHeight;
public:
	Trapezoid(double dblBase1, double dblBase2, double dblHeight) { // parameterized constructor
		this->dblBase1 = dblBase1;
		this->dbleBase2 = dblBase2;
		this->dblHeight = dblHeight;
	}
	double GetArea() { // exposed public method to calculate area
		if (IsValidShape(dblBase1, dbleBase2, dblHeight))
			return (0.5) * (dblBase1 + dbleBase2) * dblHeight;
		return 0;
	}
	void PrintInfo() { // override base class implemenation
		cout << "\nObject Type: Trapezoid";
		cout << "\nArea: " << GetArea() << "\n";
	}
};
#endif
