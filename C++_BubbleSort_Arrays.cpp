/*****************************
Gavin Taylor
04/27/2022
Rainfall Per Month
*****************************/

// Libraries
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// Function Prototypes
float displayMinimum(float rainAmount[]);
float displayMaximum(float rainAmount[]);
float displayAverage(float rainAmount[]);
void sortRain(float rainAmount[], string rainMonth[]);

// Main Function
int main()
{
    // Variables
    ifstream inputFile;
    float rainAmount[12];
    string rainMonth[12];

    // Inputting values into rainMonth
    rainMonth[0] = "January"; rainMonth[1] = "February"; rainMonth[2] = "March"; rainMonth[3] = "April"; rainMonth[4] = "May"; rainMonth[5] = "June";
    rainMonth[6] = "July"; rainMonth[7] = "August"; rainMonth[8] = "September"; rainMonth[9] = "October"; rainMonth[10] = "November"; rainMonth[11] = "December";

    // Open and Close text file
    inputFile.open("Rainfall.txt");
    for (int i = 0; i < 12; i++)
    {
        inputFile >> rainAmount[i];
    }
    inputFile.close();

    // Display Output to screen
    cout << "Monthly Rainfall for Forth Worth, TX 2021" << endl << endl;
    cout << "Minimum: " << displayMinimum(rainAmount) << endl;
    cout << "Maximum: " << displayMaximum(rainAmount) << endl;
    cout << "Monthly Average for Year: " << displayAverage(rainAmount) << endl << endl;
    cout << "Sorted by Total Rainfall" << endl << endl;
    cout << setw(12) << left << "Month" << setw(8) << right << "Inches" << endl;

    for (int d = 0; d < 12; d++)
    {
        cout << setw(12) << left << rainMonth[d] << setw(8) << right << fixed << showpoint << setprecision(2) << rainAmount[d] << endl;
    }

    sortRain(rainAmount, rainMonth);

    return 0;
}

// Display Minimum Function
float displayMinimum(float rainAmount[])
{
    // Variable
    float minimum = 0.00;

    // Loop and if statement to find minimum
    minimum = rainAmount[0];
    for (int a = 0; a < 12; a++)
    {
        if (rainAmount[a] < minimum)
        {
            minimum = rainAmount[a];
        }
    }

    // Return minimum float back to int Main
    return minimum;
}

// Display Maximum Function
float displayMaximum(float rainAmount[])
{
    // Integer
    float maximum = 0.00;

    // For and if loop to find maximum
    maximum = rainAmount[0];
    for (int b = 0; b < 12; b++)
    {
        if (rainAmount[b] > maximum)
        {
            maximum = rainAmount[b];
        }
    }

    // Return Maximum back to int Main
    return maximum;
}

// Display Average Function
float displayAverage(float rainAmount[])
{
    // Variables
    float average = 0.00;
    float sum = 0.00;

    // Calculate Average of rainAmount
    sum = rainAmount[0] + rainAmount[1] + rainAmount[2] + rainAmount[3] + rainAmount[4] + rainAmount[5] + rainAmount[6] + rainAmount[7] + rainAmount[8] + rainAmount[9] + rainAmount[10] + rainAmount[11];
    average = sum / 12;

    // Return average back to int Main
    return average;
}

void sortRain(float rainAmount[], string rainMonth[])
{
    bool swap = false;
    float rain;
    string month;

    do
    {
        swap = false;
        for (int c = 0; c < 11; c++)
        {
            if (rainAmount[c] > rainAmount[c + 1])
            {
                rain = rainAmount[c];
                rainAmount[c] = rainAmount[c + 1];
                rainAmount[c + 1] = rain;

                month = rainMonth[c];
                rainMonth[c] = rainMonth[c + 1];
                rainMonth[c + 1] = month;
                swap = true;
            }
        }
    } while (swap);

    for (int d = 0; d < 12; d++)
    {
        cout << setw(12) << left << rainMonth[d] << setw(8) << right << fixed << showpoint << setprecision(2) << rainAmount[d] << endl;
    }
}
