#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Speaker {
    string speakerName;
    string speakerNumber;
    string speakerTopic;
    double speakerFee = 0.0;
};

void speakerInfo(Speaker speakers[]);
void listData(Speaker speakers[]);

int main()
{
    Speaker speakers[5];
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
            speakerInfo(speakers);
        }

        else if (userInput == 2)
        {
            listData(speakers);
        }
    }
    return 0;
}

void speakerInfo(Speaker speakers[])
{
    string firstName;
    string lastName;

    for (int a = 0; a < 5; a++)
    {
        cout << "\nEnter the speakers' name: ";
        cin >> firstName >> lastName;
        speakers[a].speakerName = firstName + " " + lastName;

        cout << "Enter the speakers' telephone number: ";
        cin >> speakers[a].speakerNumber;

        cin.ignore();
        cout << "Enter the speakers' speaking topic: ";
        getline(cin, speakers[a].speakerTopic);

        cout << "Enter the speakers' required fee: ";
        cin >> speakers[a].speakerFee;
    }
}

void listData(Speaker speakers[])
{
    for (int b = 0; b < 5; b++)
    {
        cout << "\nName: " << speakers[b].speakerName << endl;
        cout << "Telephone Number: " << speakers[b].speakerNumber << endl;
        cout << "Speaking Topic: " << speakers[b].speakerTopic << endl;
        cout << "Fee Required: " << speakers[b].speakerFee << endl << endl;
    }
}
