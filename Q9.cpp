//Write a C++ Program to compute the fibonacci series
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    int num1 = 0, num2 = 1;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << num1 << " ";

        int nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }

    cout << endl;

    return 0;
}
