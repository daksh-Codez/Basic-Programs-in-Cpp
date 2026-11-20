#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int marks[5];
    int total = 0;
    float percentage;

    cout << "===== Student Marks Calculator =====" << endl;
    cout << "Enter student name: ";
        cin >> name;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        total = total + marks[i];
    }
        percentage = total / 5.0;

        cout << "\n===== Student Result =====" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << " / 500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 90) {
            cout << "Grade: A+" << endl;
        }
        else if (percentage >= 80) {
            cout << "Grade: A" << endl;
        }
        else if (percentage >= 70) {
            cout << "Grade: B" << endl;
        }
        else if (percentage >= 60) {
            cout << "Grade: C" << endl;
        }
        else if (percentage >= 40) {
            cout << "Grade: D" << endl;
        }
        else {
            cout << "Grade: F (Fail)" << endl;
        }
    return 0;
}
