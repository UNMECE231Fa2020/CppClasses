#include <iostream>

class Point3D {
	private:
		double _x;
		double _y;
		double _z;

	public:
		// Default Unparameterized Constructor
		Point3D() : _x{0}, _y{0}, _z{0} {
			std::cout << "Unparam constructor!\n";
		}

		// Default Parameterized Constructor
		Point3D(double x, double y, double z) : _x{x}, _y{y}, _z{z} {
			std::cout << "Param constructor!\n";
		}

		// Copy Constructor
		Point3D(const Point3D &p) : _x{p._x}, _y{p._y}, _z{p._z}  {
			std::cout << "Copy constructor!\n";
		}

		// Destructor
		~Point3D() {
			std::cout << "Destructor!\n";
		}
};

int main() {
	Point3D q;
	Point3D t(8.3, 7.6, 1.2);
	Point3D e(t);
	

	return 0;
}
