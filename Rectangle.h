#ifndef _RECTANGLE
#define _RECTANGLE

#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
private:
	double dblBase, dblHeight;
public:
	Rectangle(double dblBase, double dblHeight) { // parameterized constructor
		this->dblBase = dblBase;
		this->dblHeight = dblHeight;
	}
	double GetArea() {
		if (IsValidShape(dblBase, dblHeight, 1))
			return dblBase * dblHeight;
		return 0;
	}
	void PrintInfo() { // override base class implemenation
		cout << "\nObject Type: Rectangle";
		cout << "\nVolume: " << GetArea() << "\n";
	}
};
#endif
