//Write a C++ program to find greatest number between 3 number using if-else-if statements.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }

    if (num3 > greatest) {
        greatest = num3;
    }

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
