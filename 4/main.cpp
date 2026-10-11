#include <iostream>
using namespace std;

class Shape {
    float radius, length, width;

public:
    // Constructor
    Shape(float r, float l, float w) {
        radius = r;
        length = l;
        width = w;
    }

    void circlePerimeter() {
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }

    void rectanglePerimeter() {
        cout << "Perimeter of Rectangle = " << 2 * (length + width) << endl;
    }

    // Destructor
    ~Shape() {
        cout << "Destructor called";
    }
};

int main() {
    Shape s(5, 10, 6);

    s.circlePerimeter();
    s.rectanglePerimeter();

    return 0;
}