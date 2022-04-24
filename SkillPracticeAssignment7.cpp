/************************
Gavin Taylor
04/23/2022
Searching assignment
**************************/
#include <iostream>
using namespace std;

//Prototypes
bool linearSearch(int, int[], int);
bool binarySearch(int, int[], int);

int main()
{
    //Variables
    const int valueSize = 20;
    int intValue[valueSize] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
    int correctValue;
    int linearNum = 0;
    int binaryNum = 0;

    //Get value from user
    cout << "Please enter the Value you wish to search for: ";
    cin >> correctValue;
    cout << endl;

    //Output whether value was found with linear search
    if (linearSearch(valueSize, intValue, correctValue))
    {
        cout << "You have found the value you were looking for with a linear search.\n";
    }
    else
    {
        cout << "The total number of linear searches was: " << valueSize << ".\n";
        cout << "Your value was not found with a linear search.\n";
    }
    cout << endl;

    //Output whether value was found with binary search
    if (binarySearch(valueSize, intValue, correctValue))
    {
        cout << "You have found the value you were looking for with a binary search.\n";
    }
    else
    {
        cout << "Your value was not found with a binary search.\n";
    }

    return 0;
}

//linear search function
bool linearSearch(int size, int list[], int value)
{
    //Linear search loop
    bool found = false;
    for (int count = 0; count < size && !found; count++)
    {
        if (list[count] == value) {
            found = true;
            cout << "The total number of linear searches were: " << count << ".\n";
        }
    }
    return found;
}

//binary search function
bool binarySearch(int size, int list[], int value)
{
    //variables
    bool found = false;
    int first = 0;
    int middle;
    int last = size - 1;
    int count = 0;

    //binary search loops
    while (first <= last && !found)
    {
        middle = (first + last) / 2;

        if (list[middle] == value)
        {
            found = true;
            count++;
            cout << "The total number of binary searches were: " << count << ".\n";
        }
        else if (list[middle] > value)
        {
            last = middle - 1;
            count++;
        }
        else
        {
            first = middle + 1;
            count++;
        }
    }
    
    //Display amount of searches made if the value is not found
    if (value = !found)
    {
        cout << "The total number of binary searches were: " << count << ".\n";
    }
    
    return found;
}
