//Write a C++ program using Switch statement example to calculate grade points when user enter a grade
#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    int gradePoints;

    switch (grade) {
        case 'A':
            gradePoints = 4;
            break;
        case 'B':
            gradePoints = 3;
            break;
        case 'C':
            gradePoints = 2;
            break;
        case 'D':
            gradePoints = 1;
            break;
        case 'F':
            gradePoints = 0;
            break;
        default:
            cout << "Invalid grade entered." << endl;
            return 1; // Exit program with an error status.
    }

    cout << "Grade Points: " << gradePoints << endl;

    return 0;
}

