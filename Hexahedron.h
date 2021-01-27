#ifndef _HEXAHEDRON
#define _HEXAHEDRON

#include "Shape.h"

using namespace std;

class Hexahedron : public Shape {
private:
	double dblBase, dblHeight, dblDepth;
public:
	Hexahedron(double dblBase, double dblHeight, double dblDepth) { // parameterized constructor
		this->dblBase = dblBase;
		this->dblHeight = dblHeight;
		this->dblDepth = dblDepth;
	}
	double GetVolume() { // exposed public method to calculate volume
		if (IsValidShape(dblBase, dblHeight, dblDepth))
			return dblBase * dblHeight * dblDepth;
		return 0;
	}
	void PrintInfo() { // override base class 
		cout << "\nObject Type: Hexahedron";
		cout << "\nVolume: " << GetVolume() << "\n";
	}
};
#endif