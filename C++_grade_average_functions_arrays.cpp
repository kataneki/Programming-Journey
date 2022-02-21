#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

void nameStudent(string& studentName) {
	string nameOfStudent;
	cout << "Enter the students first and last name: ";
	getline(cin, nameOfStudent);
	cout << endl;
}

void nameAssignments(string assignments[]) {
	cout << "Enter the name of Assignment 1: ";
	getline(cin, assignments[0]);
	cout << "Enter the name of Assignment 2: ";
	getline(cin, assignments[1]);
	cout << "Enter the name of Assignment 3: ";
	getline(cin, assignments[2]);
	cout << endl;
}

void gradeAssignments(int assignmentGrade[], string assignments[]) {
	cout << "Enter the grade for " << assignments[0] << ": ";
	cin >> assignmentGrade[0];
	cout << "Enter the grade for " << assignments[1] << ": ";
	cin >> assignmentGrade[1];
	cout << "Enter the grade for " << assignments[2] << ": ";
	cin >> assignmentGrade[2];
	cout << endl;
}

void averageAssignments(string studentName, int assignmentGrade[]) {
	double averageGrade;
	averageGrade = (assignmentGrade[0] + assignmentGrade[1] + assignmentGrade[2]) / 3;
}

void displayGrade(int assignmentGrade[], string assignments[], string nameStudent) {
	cout << "The average for " << nameStudent << " is ";
	cout << fixed << showpoint << setprecision(2);
	cout << averageAssignments << endl << endl;
	cout << "Here are your grades:" << endl;
	cout << setw(20) << right << assignments[0] << ": " << assignmentGrade[0] << endl;
	cout << setw(20) << right << assignments[1] << ": " << assignmentGrade[1] << endl;
	cout << setw(20) << right << assignments[2] << ": " << assignmentGrade[2] << endl << endl;
	cout << "Thank you for playing." << endl << endl;
}

int main() {
	string studentName;
	string assignments[3];
	int assignmentGrade[3];
	double studentAverage;

	nameStudent(studentName);
	nameAssignments(assignments);
	gradeAssignments(assignmentGrade, assignments);
	averageAssignments(studentName, assignmentGrade);
	displayGrade(assignmentGrade, assignments, studentName);

	return 0;
}
