#ifndef _RECTANGLE
#define _RECTANGLE

class Rectangle {
private:
	double base, height, depth;
	bool isValidShape() { // check for impossible dimensions
		if (base <= 0 || height <= 0 || depth <= 0) return false;
		return true;
	}
public:
	Rectangle(double base, double height, double depth) { // parameterized constructor
		this->base = base;
		this->height = height;
		this->depth = depth;
	}
	double getVolume() { // exposed public method to calculate volume
		if (isValidShape())
			return base * height * depth;
		return 0;
	}
};
#endif
