#include <iostream>
#include <cmath>

namespace shapes {
    // Square Class
    class Square {
    private:
        float sideLength;

    public:
        Square() : sideLength(0) {}
        Square(float side) : sideLength(side) {}
        ~Square() {}

        void setSideLength(float side) { sideLength = side; }
        float getSideLength() const { return sideLength; }
    };

    // Triangle Class
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle() : base(0), height(0) {}
        Triangle(float b, float h) : base(b), height(h) {}
        ~Triangle() {}

        void setBase(float b) { base = b; }
        void setHeight(float h) { height = h; }
        float getBase() const { return base; }
        float getHeight() const { return height; }
    };

    // Circle Class
    class Circle {
    private:
        float radius;

    public:
        Circle() : radius(0) {}
        Circle(float r) : radius(r) {}
        ~Circle() {}

        void setRadius(float r) { radius = r; }
        float getRadius() const { return radius; }
    };

    // Area Class
    class Area {
    public:
        static float calculateSquareArea(const Square& square) {
            float side = square.getSideLength();
            return side * side;
        }

        static float calculateTriangleArea(const Triangle& triangle) {
            float base = triangle.getBase();
            float height = triangle.getHeight();
            return 0.5 * base * height;
        }

        static float calculateCircleArea(const Circle& circle) {
            float radius = circle.getRadius();
            return M_PI * radius * radius;
        }
    };
}

int main() {
    using namespace std;
    using namespace shapes;

    char choice;
    do {
        cout << "Select an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                float sideLength;
                cout << "Enter side length of the square: ";
                cin >> sideLength;

                Square square(sideLength);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case '2': {
                float base, height;
                cout << "Enter base length of the triangle: ";
                cin >> base;

                cout << "Enter height of the triangle: ";
                cin >> height;

                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case '3': {
                float radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;

                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
