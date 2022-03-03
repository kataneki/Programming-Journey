#include <iostream>
using namespace std;

void calcCircle(double areaCircle) {
	int radius = 0;
	const double pi = 3.14159;
	int circleArea = 0;

	cout << endl << "What is the radius of the circle? ";
	cin >> radius;

	circleArea = pi * pow(radius, 2);
	cout << endl << "The radius of the circle is: " << circleArea << endl;
}

void calcRectangle(double areaRectangle) {
	int lenRec = 0;
	int widRec = 0;
	int recArea = 0;

	cout << endl << "What is the rectangle's length? ";
	cin >> lenRec;
	cout << "What is the rectangle's Width? ";
	cin >> widRec;

	recArea = lenRec * widRec;
	cout << endl << "The area of the rectangle is: " << recArea << endl;
}

void calcTriangle(double areaTriangle) {
	int lenTri = 0;
	int heightTri = 0;
	int triArea = 0;

	cout << endl << "What is the length of the triangle's base? ";
	cin >> lenTri;
	cout << "What is the height of the Triangle? ";
	cin >> heightTri;

	triArea = lenTri * heightTri * .5;
	cout << endl << "The area of the triangle is: " << triArea << endl;
}

int main() {
	//variables
	int areaCalc = 0;
	double areaCircle = 0;
	double areaRectangle = 0;
	double areaTriangle = 0;

	//Find what calculation is desired
	cout << "Enter '1' to calculate the area of a circle. Enter '2' to calculate the area of a rectangle. Enter '3' to calculate the area of a triangle. ";
	cin >> areaCalc;

	if (areaCalc == 1) {
		calcCircle(areaCircle);
	}
	else if (areaCalc == 2) {
		calcRectangle(areaRectangle);
	}
	else if (areaCalc == 3) {
		calcTriangle(areaTriangle);
	}
	else {
		cout << endl << "ERROR: Select a number between 1-3." << endl;
	}
}

