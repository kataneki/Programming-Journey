// 2/14/2022

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string studentName;
	string assignment[3];
	int grade[3];
	double studentAverage;

	// Get inputs for assignment names
	cout << "Enter the students first and last name: ";
	getline(cin, studentName);
	cout << endl << "Enter the name of assignment 1: ";
	getline(cin, assignment[0]);
	cout << "Enter the name of assignment 2: ";
	getline(cin, assignment[1]);
	cout << "Enter the name of assignment 3: ";
	getline(cin, assignment[2]);

	// Get inputs for assignment grades
	cout << endl << "Enter the grade for " << assignment[0] << ": ";
	cin >> grade[0];
	cout << "Enter the grade for " << assignment[1] << ": ";
	cin >> grade[1];
	cout << "Enter the grade for " << assignment[2] << ": ";
	cin >> grade[2];

	// Calculate average
	studentAverage = (1.0 * grade[0] + grade[1] + grade[2]) / 3.0;

	// Display average and grade
	cout << endl << "The average for " << studentName << " is ";
	cout << fixed << showpoint << setprecision(2);
	cout << studentAverage << endl << endl;
	cout << "Here are your grades:" << endl;
	cout << assignment[0] << ": " << grade[0] << endl;
	cout << assignment[1] << ": " << grade[1] << endl;
	cout << assignment[2] << ": " << grade[2] << endl << endl;
	cout << "Thank you for playing." << endl << endl;

	return 0;
}