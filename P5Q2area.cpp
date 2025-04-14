//. Create a class area which will calculate and display the areas of circle, triangle and rectangle with the use of constructors and will pass data members as default arguments.
#include <iostream>
#include <cmath>
using namespace std;

class area {
    float ar; // Using float to store areas

public:
    // Constructor for circle
    area(int r) {
        ar = 3.14 * r * r;
        cout << "Area of circle: " << ar << endl;
    }

    // Constructor for rectangle
    area(float l, float w) {
        ar = l * w;
        cout << "Area of rectangle: " << ar << endl;
    }

    // Constructor for triangle (Using Heron's Formula)
    area(int a, int b, int c) {
        float s = (a + b + c) / 2.0; // Semi-perimeter
        ar = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of triangle: " << ar << endl;
    }
};

int main() {
    area obj1(5);        // Circle
    area obj2(6.766, 23.5); // Rectangle
    area obj3(3, 4, 5);  // Triangle (valid example)

    return 0;
}