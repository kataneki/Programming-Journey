// Gavin Taylor
// 2/14/2022

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
	double degCelsius;
	double degFahrenheit;
	double degreesCelsius;
	double degreesFahrenheit;

	// Get input of degree in celsius
	cout << "What is the degrees in Celsius?\n";
	cin >> degCelsius;

	// Calculate celsius to fahrenheit
	degFahrenheit = (degCelsius * 9.0) / 5.0 + 32;

	// Output degree in fahrenheit
	cout << "If the temperature is ";
	cout << fixed << showpoint << setprecision(1);
	cout << degCelsius << " degrees Celsius, then it is " << degFahrenheit << " degrees Fahrenheit." << endl;

	// Get input of degree in fahrenheit
	cout << "What is the degrees in Fahrenheit?\n";
	cin >> degreesFahrenheit;

	// Calculate fahrenheit to celsius
	degreesCelsius = (degreesFahrenheit - 32) * 5 / 9;

	// Output degree in celsius
	cout << "If the temperature is ";
	cout << fixed << showpoint << setprecision(1);
	cout << degreesFahrenheit << " degrees Fahrenheit, then it is " << degreesCelsius << " Degrees Celsius." << endl;

	return 0;
}
