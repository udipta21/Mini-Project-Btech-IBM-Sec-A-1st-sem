
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter number of days: ";
    cin >> m;

    int bill[n][m];

    cout << "Enter bill amounts for each student (rows) for each day (columns):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> bill[i][j];
        }
    }

 
    cout << "\nBill Matrix (each row is a student, each column is a day):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << bill[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    int studentTotals[n] = {0};
    int dayTotals[m] = {0};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            studentTotals[i] += bill[i][j];
            dayTotals[j] += bill[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: Rs." << studentTotals[i] << "  " << endl;
    }

    int maxDayIndex = 0;
    for (int j = 1; j < m; ++j) {
        if (dayTotals[j] > dayTotals[maxDayIndex]) {
            maxDayIndex = j;
        }
    }
    cout << "Highest collection on Day " << maxDayIndex + 1 << "  " << endl;

    int maxSpent = studentTotals[0];
    for (int i = 1; i < n; ++i) {
        if (studentTotals[i] > maxSpent) {
            maxSpent = studentTotals[i];
        }
    }

    cout << "Highest spender:";
    bool first = true;
    for (int i = 0; i < n; ++i) {
        if (studentTotals[i] == maxSpent) {
            if (!first) {
                cout << " and";
            }
            cout << " Student " << i + 1;
            first = false;
        }
    }
    cout << endl;

    return 0;
}
