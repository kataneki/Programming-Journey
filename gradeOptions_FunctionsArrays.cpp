/******************************
   Name
   Date
   PA3_Starter.cpp
   Write a description of the program
********************************/
// Headers
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
int loadStudentNamesGrades(string students[], int grades[][MAX_GRADES], string fileName, int maxStudents);
void displayAverages(string students[], int grades[][MAX_GRADES], int studentCount);
void displayMax(string students[], int grades[][MAX_GRADES], int studentCount);
void displayMin(string students[], int grades[][MAX_GRADES], int studentCount);
char getLetterGrade(double grade);
int getLongestNameLength(string students[], int studentCount);

int main()
{
    int maxStudents = 25;
    string firstName, lastName;
    string students[22];
    int grades[22][5];
    int userChoice = 0;
    int numRow = 0;
    const int gradeCount = 5;
    string fileName;
    int grade = 0;
    int studentCount = 25;

    // Get students and grades
    loadStudentNamesGrades(students, grades, fileName, maxStudents);

    // Loop until user says to quit

     // present menu and get user's choice

    while (userChoice != 4) {
        cout << "Grade Report Program" << endl << endl << "1. Display Average Grade" << endl << "2. Display Maximum Grade" << endl << "3. Display Minimum Grade" << endl << "4. Quit Program" << endl;
        cout << endl << "Enter your choice (1-4): ";
        cin >> userChoice;
        cout << endl << endl;

        if (userChoice == 1) {
            displayAverages(students, grades, studentCount); //add grade
        }
        if (userChoice == 2) {
            displayMax(students, grades, studentCount); //add grade
        }
        if (userChoice == 3) {
            displayMin(students, grades, studentCount);
        }
    }
    // Process the choice
    // End of program    
    // Make sure we place the end message on a new line
    return 0;
}

/***********************************************************
loadStudentNameGrades opens and read fileName. It will read in two strings,
concatenate them, and then save
to the students array. It then reads five integers and save each to the grades
array. The function will return
the actual number of student/grade combinations read
PARAM: students is an array of strings that can hold up ot maxStudents values
grades is a two dimensional array for holding the grades of each
student
fileName is the name of the file that will be opened and read
maxStudents is the maximum number of students that we will read from
the file
PRE: students[] is large enough to contain up to maxStudents elements
grades[] is large enough ot contain up to maxStudents elements
POST: students[] contains the names of up to maxStudents
grades[][] contains the grades for up to maxStudents
The number of student/grade combinations actually read from the file is
returned. This value can range
between 0 <= numStudents <= maxStudents
NOTE: students[] and grades[] are meant to be parralel arrays. students[0] and
grades[0] are the same student
************************************************************/
int loadStudentNamesGrades(string students[], int grades[][MAX_GRADES], string fileName, int maxStudents)
{
    string firstName, lastName;
    int numRow = 0;
    ifstream inputFile;

    inputFile.open("NamesGrades.txt");

    for (int i = 0; i < maxStudents && (inputFile >> firstName >> lastName); i++, numRow) {
        students[i] = firstName + " " + lastName;
        for (int j = 0; j < MAX_GRADES; j++) {
            inputFile >> grades[i][j];
        }
    }

    inputFile.close();

    return 0; // for stub out purposes, change this in your code
}

/***********************************************************
displayAverages calculates the average of each student and displays the
students name, average, and letter grade of the average in a table
PARAM: students[] is an array of strings that contains the names of
studentCount students
grades[] is an array of integers that contains the grades of
studentCount students
studentCount contains the value of the number of elements in the
students[] and grades[] arrays
PRE: students[] and grades[] contain values for studentCount elements
POST: table of student names, averages, and letter grades is displayed
************************************************************/
void displayAverages(string students[], int grades[][MAX_GRADES], int studentCount)
{
    int gradeAverage[22];

    for (int i = 0; i < studentCount; i++) {
        gradeAverage[i] = grades[i][0] + grades[i][1] + grades[i][2] + grades[i][3] + grades[i][4];
        gradeAverage[i] = gradeAverage[i] / 5;
    }

    cout << "Average Grades" << endl;
    cout << "Name ";
    cout << setw(20) << right << "Average ";
    cout << setw(20) << right << "Grade" << endl;

    for (int u = 0; u < studentCount; u++) {
        cout << students[u] << " " << gradeAverage[u] << "CALL LETTER GRADE FUNCTION HERE" << endl;
    }
}

/***********************************************************
displayMax calculates the maximum grade of each student and displays the
students name, maximum grade, and letter grade of the maximum grade in a table
PARAM: students[] is an array of strings that contains the names of
studentCount students
grades[] is an array of integers that contains the grades of
studentCount students
studentCount contains the value of the number of elements in the
students[] and grades[] arrays
PRE: students[] and grades[] contain values for studentCount elements
POST: table of student names, maximum grades, and letter grades is displayed
************************************************************/
void displayMax(string students[], int grades[][MAX_GRADES], int studentCount)
{
    double studentGrade[22];

    for (int a = 0; a < studentCount; a++) {
        studentGrade[a] = grades[a][0];
        for (int b = 0; b < MAX_GRADES; b++) {
            if (grades[a][b] > studentGrade[a]) {
                studentGrade[a] = grades[a][b];
            }
        }
    }

    cout << "Max Grades" << endl;
    cout << "Name" << "Max" << "Grade" << endl;

    for (int u = 0; u < studentCount; u++) {
        cout << students[u] << " " << studentGrade[u] << " CALL GET LETTER GRADE HERE" << endl;
    }
}

/***********************************************************
displayMin calculates the minimum grade of each student and displays the
students name, minimum grade, and letter grade of the minimum grade in a table
PARAM: students[] is an array of strings that contains the names of
studentCount students
grades[] is an array of integers that contains the grades of
studentCount students
studentCount contains the value of the number of elements in the
students[] and grades[] arrays
PRE: students[] and grades[] contain values for studentCount elements
POST: table of student names, minimum grades, and letter grades is displayed
************************************************************/
void displayMin(string students[], int grades[][MAX_GRADES], int studentCount)
{
    int grade[22];

    for (int a = 0; a < studentCount; a++) {
        grade[a] = grades[a][0];
        for (int b = 0; b < MAX_GRADES; b++) {
            if (grades[a][b] < grade[a]) {
                grade[a] = grades[a][b];
            }
        }
    }

    cout << "Min Grades" << endl;
    cout << "Name          " << "Min         " << "Grade" << endl;

    for (int u = 0; u < studentCount; u++) {
        cout << students[u] << " " << grade[u] << " CALL LETTER GRADE FUNCTION HERE" << endl;
    }
}

/***********************************************************
getLetterGrade converts a numerical grade to a letter grade
PARAM: grade is the numerical grade to convert. Expected range is 0 <= grade
<= 100
PRE: grade contains a value in the correct range
POST: The corresponding letter grade of the numerical grade is returned
************************************************************/
char getLetterGrade(double& grade)
{
    for (int s = 0; s < 22; s++) {
        if (grade >= 0 and grade < 60) {
            cout << "F" << endl;
        }
        if (grade >= 60 and grade < 70) {
            cout << "D" << endl;
        }
        if (grade >= 70 and grade < 80) {
            cout << "C" << endl;
        }
        if (grade >= 80 and grade < 90) {
            cout << "B" << endl;
        }
        if (grade >= 90 and grade <= 100) {
            cout << "A" << endl;
        }
    }
    return 0;
}

/***********************************************************
getLongestNameLength returns the length of the longest string from a list of
strings
PARAM: students[] is an array of strings that contains the name of students
studentCount is the size of the students[] array
PRE: students[] contains studentCount names
POST: The length of the longest string in students[] is returned
************************************************************/
/******************************
int getLongestNameLength(string students[], int studentCount)
{





}
*******************************/
