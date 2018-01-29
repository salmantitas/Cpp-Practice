#include <iostream>
#include "desiredAverageCalculate.h"
#include "addNumbers.h"

using namespace std;

int main()
{
    cout << "The feature list and access method is listed below.\n" <<
    "Please choose the desired feature\n[1] Add Numbers\n[2] Desired Average Calculator\n" <<
    "Please enter the number for your desired feature: ";
    int input;
    cin >> input;
    if (input == 1)
    {
        addNumbers();
        return 0;
    }
    if (input == 2)
    {
        desiredAverage();
        return 0;
    }
    else
    {
        cout << "Feature unavailable or nonexistent" << endl;
    }
    return 0;
}


