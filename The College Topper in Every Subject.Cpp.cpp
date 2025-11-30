#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 5;
    const int SUBJECTS = 3;
    int marks[10][10];

    string subjects[] = {"Mathematics", "Physics", "Computer Science"};

    cout << "Enter marks of 5 students in 3 subjects:" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Student " << (i + 1) << ": ";
        for (int j = 0; j < SUBJECTS; j++) {
            cin >> marks[i][j];
        }
    }

    cout << endl;

    for (int j = 0; j < SUBJECTS; j++) {
        int highest = marks[0][j];

        for (int i = 1; i < STUDENTS; i++) {
            if (marks[i][j] > highest) {
                highest = marks[i][j];
            }
        }

        cout << "Highest marks in " << subjects[j] << ": " << highest << endl;
    }

    return 0;
}