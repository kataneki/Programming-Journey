#include <iostream>
#include <string>
using namespace std;

int main()
{
    string getName[5];
    int tempGrade;
    int studentGrade[5][4];
    char letterGrade[5];
    double testScores[5];

    // Get inputs from user: student names, and student grades on assignments
    for (int i = 0; i < 5; i++) {
        cout << "What is the students name? ";
        getline(cin, getName[i]);
        for (int u = 0; u < 4; u++) {
            cout << "Enter Grade (0-100 ONLY) " << u + 1 << " for " << getName[i] << ": ";
            cin >> tempGrade;
            while (tempGrade < 0 or tempGrade > 100) {
                cout << "Enter Grade (0-100 ONLY) " << u + 1 << " for " << getName[i] << ": ";
                cin >> tempGrade;
            }
            studentGrade[i][u] = tempGrade;
        }
        cout << endl;
        cin.ignore();
    }

    // Calculate student averages
    for (int k = 0; k < 5; k++) {
        testScores[k] = studentGrade[k][0] + studentGrade[k][1] + studentGrade[k][2] + studentGrade[k][3];
        testScores[k] = testScores[k] / 4;
    }

    // Print Student test scores to screen
    for (int s = 0; s < 5; s++) {
        cout << getName[s] << " has an average test score of: " << testScores[s];
        if (testScores[s] >= 0 and testScores[s] < 60) {
            cout << " - F" << endl;
        }
        if (testScores[s] >= 60 and testScores[s] < 70) {
            cout << " - D" << endl;
        }
        if (testScores[s] >= 70 and testScores[s] < 80) {
            cout << " - C" << endl;
        }
        if (testScores[s] >= 80 and testScores[s] < 90) {
            cout << " - B" << endl;
        }
        if (testScores[s] >= 90 and testScores[s] <= 100) {
            cout << " - A" << endl;
        }
    }

    return 0;
}
