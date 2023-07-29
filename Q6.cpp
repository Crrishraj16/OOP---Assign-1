//Write a C++ program to find the area and perimeter of rectangle.
#include <iostream>
using namespace std;

int main() {
    double length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
