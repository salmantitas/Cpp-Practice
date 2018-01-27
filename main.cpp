#include <iostream>
#include "desiredAverageCalculate.h"

using namespace std;

int main()
{
    cout << "The feature list and access method is listed below." << endl;
    cout << "Please choose the desired feature" << endl;
    cout << "[1] Desired Average Calculator" << endl;
    cout << "Please enter the number for your desired feature: ";
    int input;
    cin >> input;
    if (input == 1)
    {
        desiredAverage();
    }
    else
    {
        desiredAverage();
    }
    return 0;
}


