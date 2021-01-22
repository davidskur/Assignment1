#ifndef _SHAPE
#define _SHAPE

using namespace std;

// abstract base class
class Shape {
private:
	double dimension1, dimension2, dimension3;
public:
	virtual bool isValidShape(double dim1, double dim2, double dim3) { // check for impossible dimensions
		if (dim1 <= 0 || dim2 <= 0 || dim3 <= 0)
			return false;
		return true;
	}
	virtual void printInfo() {
		cout << "\nObject Type: Basic Shape";
		cout << "\nDimensions: None";
	}
};
#endif