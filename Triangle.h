#ifndef _TRIANGLE
#define _TRIANGLE

#include <cmath>

class Triangle {
private:
	double side1, side2;
	bool isValidTriangle() {
		if (side1 <= 0 || side2 <= 0)
			return false;
		else
			return true;
	}
public:
	Triangle(double side1, double side2) { // parameterized constructor
		this->side1 = side1;
		this->side2 = side2;
	}
	double getHypotenuse() { // exposed public method to calculate hypotenuse
		if (isValidTriangle()) {
			return sqrt(pow(side1, 2) + pow(side2, 2)); // manual calculation, could also use hypot(side1, side2);
		}
		else
			return 0;
	}
};

#endif
