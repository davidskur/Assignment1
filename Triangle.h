#ifndef _TRIANGLE
#define _TRIANGLE

#include <cmath>

class Triangle {
private:
	double side1, side2;
	bool isValidTriangle() {
		if (side1 <= 0 || side2 <= 0) return false;
		return true;
	}
public:
	Triangle(double side1, double side2) { // parameterized constructor
		this->side1 = side1;
		this->side2 = side2;
	}
	double getHypotenuse() { // exposed public method to calculate hypotenuse
		if (isValidTriangle()) return hypot(side1, side2);
		return 0;
	}
};
#endif
