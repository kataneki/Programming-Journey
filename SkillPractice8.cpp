#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void speakerInfo(string speakerName, string speakerNumber, string speakerTopic, int speakerFee);
void listData(string speakerName, string speakerNumber, string speakerTopic, int speakerFee);

int main()
{
    string speakerName;
    string speakerNumber;
    string speakerTopic;
    string speakerFee;
    int userInput = 0;

    while (userInput != 3)
    {
        cout << "Speakers' Bureau: Select a number" << endl << endl;
        cout << setw(5) << left << "1. Enter info for a speaker" << endl;
        cout << setw(5) << left << "2. List data stored in the structure" << endl;
        cout << setw(5) << left << "3. Exit the program" << endl << endl;
        cout << "User Choice: ";
        cin >> userInput;

        if (userInput == 1)
        {
            speakerInfo(speakerName, speakerNumber, speakerTopic, speakerFee);
        }

        else if (userInput == 2)
        {
            listData(speakerName, speakerNumber, speakerTopic, speakerFee);
        }

    }

    return 0;
}

void speakerInfo(string speakerName, string speakerNumber, string speakerTopic, int speakerFee)
{
    string firstName;
    string lastName;

    cout << "\nEnter the speakers' name: ";
    cin >> firstName >> lastName;
    speakerName = firstName + " " + lastName;

    cout << "Enter the speakers' telephone number: ";
    cin >> speakerNumber;

    cout << "Enter the speakers' speaking topic: ";
    getline(cin, speakerTopic);
    
    cout << "Enter the speakers' required fee: ";
    cin >> speakerFee;
}

void listData(string speakerName, string speakerNumber, string speakerTopic, int speakerFee)
{
    cout << "\nName: " << speakerName << endl << endl;
    cout << "Telephone Number: " << speakerNumber << endl << endl;
    cout << "Speaking Topic: " << speakerTopic << endl << endl;
    cout << "Fee Required: " << speakerFee << endl << endl;
}
