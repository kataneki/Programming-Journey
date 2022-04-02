#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userInputMax = 0;
    int userInputMin = 0;
    int userInput = 0;

    while (userInput != -99) {
        cout << "Enter an integer that is NOT '-99', when finished enter '-99': ";
        cin >> userInput;

        if (userInput > userInputMax and userInput != -99) {
            userInputMax = userInput;
        }

        if (userInput < userInputMin and userInput != -99) {
            userInputMin = userInput;
        }
    }

    cout << "\nThe smallest integer entered is: " << userInputMin << ", and the largest integer entered is: " << userInputMax << "." << endl;

    return 0;
}
