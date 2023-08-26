#include <iostream>
using namespace std;

double circle(double radius) {
    return 3.14159 * radius * radius;
}

double rectangle(double length, double width) {
    return length * width;
}

int main() {
    int ch;
    cout << "Enter your choice (1 for circle, 2 for rectangle): ";
    cin >> ch;
    
    switch (ch) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = circle(radius);
            cout << "The area of the circle with radius " << radius << " is " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = rectangle(length, width);
            cout << "The area of the rectangle with length " << length << " and width " << width << " is " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
