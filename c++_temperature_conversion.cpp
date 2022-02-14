// Gavin Taylor
// 2/14/2022

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
	double degCelcius;
	double degFahrenheit;
	double degreesCelcius;
	double degreesFahrenheit;

	// Get input of degree in celcius
	cout << "What is the degrees in Celcius?\n";
	cin >> degCelcius;

	// Calculate celcius to fahrenheit
	degFahrenheit = (degCelcius * 9.0) / 5.0 + 32;

	// Output degree in fahrenheit
	cout << "If the temperature is ";
	cout << fixed << showpoint << setprecision(1);
	cout << degCelcius << " degrees Celcius, then it is " << degFahrenheit << " degrees Fahrenheit." << endl;

	// Get input of degree in fahrenheit
	cout << "What is the degrees in Fahrenheit?\n";
	cin >> degreesFahrenheit;

	// Calculate fahrenheit to celcius
	degreesCelcius = (degreesFahrenheit - 32) * 5 / 9;

	// Output degree in celcius
	cout << "If the temperature is ";
	cout << fixed << showpoint << setprecision(1);
	cout << degreesFahrenheit << " degrees Fahrenheit, then it is " << degreesCelcius << " Degrees Celcius." << endl;

	return 0;
}
