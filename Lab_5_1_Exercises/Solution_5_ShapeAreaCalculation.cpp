#include <iostream>
#include <cmath>
using namespace std;

// Functions of areas
double calculateSquareArea(double side);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}


int main() {
    int shape_area;
    double side, length, width, base, height;

    while (true) {
        cout << "Please select the ";
        if (cin.fail()) {
            cout << shape_area << " which is an invalid input!!!";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "area of the shape to calculate:\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit program\n";
        cout << "Enter selection: ";
        cin >> shape_area;

        if (shape_area > 4) {
            cout << "Your input was: " << shape_area << " which is an invalid input \n Please enter a valid input!!!\n";
            continue;
        }

        if (shape_area == 1) {
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "Area of the square: " << calculateSquareArea(side) << endl;
        } else if (shape_area == 2) {
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
        } else if (shape_area == 3) {
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
        } else if (shape_area == 4) {
            cout << "Exiting program. Goodbye!\n";
            break;
        } else {
            cout << "Your input  was :" << shape_area << " which is an invalid input Please enter a valid input!!!\n";
        }
    }

    return 0;
}

