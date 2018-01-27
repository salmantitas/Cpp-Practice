#include <iostream>
#include "desiredAverageCalculate.h"

using namespace std;

 /* Displays the string to the user and takes the returns the input of the user
  */
int getValueFromUser(string s)
{
    int a;
    cout << s;
    cin >> a;
    return a;
}

 /* Returns the required score per course for desired average
  * using the number of courses taken so far, the current average,
  * the number of courses currently being taken and the desired average.
  */
void desiredAverage()
{
    int a = getValueFromUser("Enter the number of courses you have taken: ");
    int b = getValueFromUser("Enter your current average: ");
    int c = getValueFromUser("Enter the number of courses you are taking: ");
    int d = getValueFromUser("Enter your desired average: ");
    int required = scoreNeededForAverage(a, b, c, d);
    if (required > 100) {
        cout << "An average of that score cannot be reached at the moment." << endl;
    }
    else {
    cout << required << endl;
    }
}

 /* Helper function to calclate the desired average
 */
int scoreNeededForAverage(int takenSoFar, int currentAverage, int taking, int wantedAverage)
{
    return ((wantedAverage * (takenSoFar + taking)) - currentAverage*takenSoFar)/taking;
}

