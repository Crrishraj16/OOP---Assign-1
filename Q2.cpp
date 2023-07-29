//Write a C++ program to swap the values of two integers.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
