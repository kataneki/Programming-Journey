#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int userInputMax = 0;
    int userInputMin = 0;
    int userInput = 0;

    while (userInput != -99) {
        cout << "Enter an integer that is not -99, if finished enter '-99': ";
        cin >> userInput;

        if (userInput > userInputMax) {
            userInputMax == userInput;
        }

        else {
            userInputMin == userInput;
        }
    }
    cout << userInputMax << endl;
    cout << userInputMin << endl;

    return 0;
}

