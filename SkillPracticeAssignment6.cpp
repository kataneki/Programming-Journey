#include <iostream>
#include <string>
using namespace std;

int main()
{
    string getName[5];
    int studentGrade[5][4];
    char letterGrade[5];
    double testScores[5];

    // Get inputs from user: student names, and student grades on assignments

    for (int i = 0; i < 5; i++) {
        cout << "What is the students name? ";
        getline(cin, getName[i]);
        for (int u = 0; u < 4; u++) {
            cout << "Enter Grade " << u + 1 << " for " << getName[i] << ": ";
            cin >> studentGrade[i][u];
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

    cout << getName[0] << " has an average test score of: " << testScores[0] << endl;
    cout << getName[1] << " has an average test score of: " << testScores[1] << endl;
    cout << getName[2] << " has an average test score of: " << testScores[2] << endl;
    cout << getName[3] << " has an average test score of: " << testScores[3] << endl;
    cout << getName[4] << " has an average test score of: " << testScores[4] << endl;

    return 0;
}
