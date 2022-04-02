#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userInputMax;
    int userInputMin;
    int userInput;

    cout << "Enter an integer that is NOT '-99', when finished enter '-99': ";
    cin >> userInput;
    userInputMin = userInput;
    userInputMax = userInput;


    while (userInput != -99) {
        cout << "Enter an integer that is NOT '-99', when finished enter '-99': ";

        if (userInput > userInputMax) {
            userInputMax = userInput;
        }

        if (userInput < userInputMin) {
            userInputMin = userInput;
        }

        cin >> userInput;
    }

    cout << "\nThe smallest integer entered is: " << userInputMin << ", and the largest integer entered is: " << userInputMax << "." << endl;

    return 0;
}
