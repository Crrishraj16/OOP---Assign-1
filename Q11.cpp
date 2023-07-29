// Write a C++ program to calculate the sum of 5 subject and find the percentage
#include <iostream>
using namespace std;

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    cout << "Enter marks of 5 subjects: ";
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;

    int totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    double percentage = double(totalMarks) / 5.0;

    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
