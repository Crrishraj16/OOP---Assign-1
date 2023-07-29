//Write a C++ Program to enter salary and output income tax and net salary.
#include <iostream>
using namespace std;

int main() {
    double salary;
    cout << "Enter your salary: ";
    cin >> salary;

    double incomeTax = 0.0;
    double netSalary = 0.0;

    if (salary <= 500000) {
        incomeTax = 0;
    } else if (salary <= 1000000) {
        incomeTax = (salary - 500000) * 0.2;
    } else {
        incomeTax = 100000 + (salary - 1000000) * 0.3;
    }

    netSalary = salary - incomeTax;

    cout << "Income Tax: " << incomeTax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}