#include <iostream>

class Rectangle {
private:
    float length;

    float width;

public:
    Rectangle() : length(0), width(0) {}                            // Default constructor
    Rectangle(float len, float wid) : length(len), width(wid) {}     // Overloaded constructor
    ~Rectangle() {} // Destructor

        // Accessor methods
    void setLength(float len) { length = len; }

    void setWidth(float wid) { width = wid; }

    float getLength() const { return length; }
    
    float getWidth() const { return width; }

        // Function to calculate area
    float calculateArea() const { return length * width; }
};

int main() {
    using namespace std;

    float length1, width1;
    cout << "Enter length of  first rectangle: ";
    cin >> length1;

    cout << "Enter width of  first rectangle: ";
    cin >> width1;

    Rectangle rect1(length1, width1);
    cout << "Area of  first rectangle: " << rect1.calculateArea() << endl;

    float length2, width2;
    cout << "Enter length of  second rectangle: ";
    cin >> length2;

    cout << "Enter width of second rectangle: ";
    cin >> width2;

    Rectangle rect2(length2, width2);
    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
