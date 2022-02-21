#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


// Function
void kineticEnergy(double objMass, double velocity) {
    double kEner = 0;
    double kEnergy = 0;
    double objTimesVel = 0;
    double veloc = 0;

// Function calculations
    veloc = pow(velocity, 2);
    objTimesVel = objMass * veloc;
    kEnergy = .5 * objTimesVel;

// Output to screen
    cout << "The kinetic energy of the object is: " << kEnergy << " J." << endl;
}

int main()
{
// Variables
    double kil = 0;
    double vel = 0;

// Inputs
    cout << "What is the objects mass in kilograms? ";
    cin >> kil;

    cout << "What is the objects velocity in Meters per second? ";
    cin >> vel;

// Call to function
    kineticEnergy(kil, vel);

    return 0;
}
