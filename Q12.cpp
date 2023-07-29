//Write a C++ program to check larger of two numbers using Ternary operator
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;

    return 0;
}
