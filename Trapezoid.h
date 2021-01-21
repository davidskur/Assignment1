#ifndef _TRAPEZOID
#define _TRAPEZOID

class Trapezoid {
private:
	double base1, base2, height;
	bool isValidShape() { // check for impossible dimensions
		if (base1 <= 0 || base2 <= 0 || height <= 0) 
			return false;
		return true;
	}
public:
	Trapezoid(double base1, double base2, double height) { // parameterized constructor
		this->base1 = base1;
		this->base2 = base2;
		this->height = height;
	}
	double getArea() { // exposed public method to calculate area
		if (isValidShape())
			return (0.5) * (base1 + base2) * height;
		return 0;
	}
};
#endif
