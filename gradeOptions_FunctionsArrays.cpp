#include <iostream> // cout, cin
#include <cstdlib> // exit()
#include <string> // strings
#include <fstream> // file processing
#include <iomanip> // stream manipulation
using namespace std;

// Global variables
const int MAX_STUDENTS = 25; // We will not process more than 25 students even if the file contains more
const int MAX_GRADES = 5; // Each student has exactly 5 grades
const string FILENAME = "NamesGrades.txt"; // The name of the file that you will read

// Function declarations
void displayAverages(string students[], int grades[][MAX_GRADES], int
    studentCount);
void displayMax(string students[], int grades[][MAX_GRADES], int studentCount);
void displayMin(string students[], int grades[][MAX_GRADES], int studentCount);
char getLetterGrade(double grade);
int getLongestNameLength(string students[], int studentCount);

int main() {
    int studentCount = 0;
    string firstName, lastName;
    string students[22];
    int grades[22][5];
    int userChoice;
    int numRow = 0;
    const int gradeCount = 5;
    ifstream gradesFS;
    int grade = 0;

    // Get students and grades
    gradesFS.open("NamesGrades.txt");

    for (int i = 0; i < studentCount && (gradesFS >> firstName >> lastName); i++, numRow) {
        students[i] = firstName + " " + lastName;
        for (int j = 0; j < MAX_GRADES; j++) {
            gradesFS >> grades[i][j];
        }
    }

    gradesFS.close();

    // Loop until user says to quit
    cout << "Enter '1' for the students Grade Averages. Enter '2' for the students Max Grades. Enter '3' for the students Min Grades.\n";
    cin >> userChoice;

    if (userChoice == 1) {
        displayAverages(students, grades, studentCount);
    }
    if (userChoice == 2) {
        displayMax(students, grades, studentCount);
    }
    if (userChoice == 3) {
        displayMin(students, grades, studentCount);
    }
    // present menu and get user's choice
// Process the choice
// End of program    
// Make sure we place the end message on a new line
    cout << endl;
    return 0;
}

/***********************************************************
displayAverages calculates the average of each student and displays the
students name, average, and letter grade of the average in a table
************************************************************/
void displayAverages(string students[], int grades[][MAX_GRADES], int studentCount)
{
    int gradeAverage[22];

    for (int i = 0; i < studentCount; i++) {
        gradeAverage[i] = grades[i][0] + grades[i][1] + grades[i][2] + grades[i][3] + grades[i][4];
        gradeAverage[i] = gradeAverage[i] / 5;
    }
    
    for (int u = 0; u < studentCount; u++) {
        cout << students[u] << " average grade is: " << gradeAverage[u] << endl;
    }
}

/***********************************************************
displayMax calculates the maximum grade of each student and displays the
students name, maximum grade, and letter grade of the maximum grade in a table
************************************************************/
void displayMax(string students[], int grades[][MAX_GRADES], int studentCount)
{
    int grade;
    for (int a = 0; a < studentCount; a++) {
        grade = grades[a][0];
        for (int b = 0; b < MAX_GRADES; b++) {
            if (grades[a][b] > grade) {
                grade = grades[a][b];
            }
        }
    }
    for (int u = 0; u < studentCount; u++) {
        cout << students[u] << " highest grade is: " << grades[u] << endl;
    } 
}

/***********************************************************
displayMin calculates the minimum grade of each student and displays the
students name, minimum grade, and letter grade of the minimum grade in a table
************************************************************/
void displayMin(string students[], int grades[][MAX_GRADES], int studentCount)
{
    int grade;
    for (int a = 0; a < studentCount; a++) {
        grade = grades[a][0];
        for (int b = 0; b < MAX_GRADES; b++) {
            if (grades[a][b] < grade) {
                grade = grades[a][b];
            }
        }
    }
    for (int u = 0; u < studentCount; u++) {
        cout << students[u] << " lowest grade is: " << grades[u] << endl;
    }
}

/***********************************************************
getLetterGrade converts a numerical grade to a letter grade
PARAM: grade is the numerical grade to convert. Expected range is 0 <= grade
<= 100
************************************************************/
/*******************************************
char getLetterGrade(double grade)
{
    for (int s = 0; s < 22; s++) {
        if (grade[s] >= 0 and grade[s] < 60) {
            cout << " - F" << endl;
        }
        if (grade[s] >= 60 and grade[s] < 70) {
            cout << " - D" << endl;
        }
        if (grade[s] >= 70 and grade[s] < 80) {
            cout << " - C" << endl;
        }
        if (grade[s] >= 80 and grade[s] < 90) {
            cout << " - B" << endl;
        }
        if (grade[s] >= 90 and grade[s] <= 100) {
            cout << " - A" << endl;
        }
    }

}
*********************************************/

/***********************************************************
getLongestNameLength returns the length of the longest string from a list of
strings
************************************************************/
/*****************************************************
/int getLongestNameLength(string students[], int studentCount)
{






}
******************************************************/
