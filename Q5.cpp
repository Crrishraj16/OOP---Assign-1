//Write a C++ Program to convert days into years and weeks
#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    int years = days / 365;
    int remainingDays = days % 365;
    int weeks = remainingDays / 7;
    int remainingWeeks = remainingDays % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Remaining Days: " << remainingWeeks << endl;

    return 0;
}