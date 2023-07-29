//Write a C++ program that will ask user to input two numbers and check whether values are equal or not using assignment operator.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    bool equal = (num1 == num2);

    cout << "The numbers are " << (equal ? "equal." : "not equal.") << endl;

    return 0;
}
