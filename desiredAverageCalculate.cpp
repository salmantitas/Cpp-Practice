#include <iostream>
#include "userInput.h"
#include "desiredAverageCalculate.h"

using namespace std;

/* Returns the required score per course for desired average
 * using the number of courses taken so far, the current average,
 * the number of courses currently being taken and the desired average.
 */

void desiredAverage()
{
    int a(getIntFromUser("Enter the number of courses you have taken: "));
    int b(getIntFromUser("Enter your current average: "));
    int c(getIntFromUser("Enter the number of courses you are taking: "));
    int d(getIntFromUser("Enter your desired average: "));
    if (d == 100 && b != d)
    {
        cout << "A 100? Really? You fucking kidding me?" << endl;
    }
    if (b == 100)
    {
        cout << "Wait, you actually have a fucking 100?" << endl;
    }
    else
    {
        int required(calculateScoreNeeded(a, b, c, d));
        if (required > 100)
            {
                cout << "An average of that score cannot be reached at the moment." << endl;
                cout << "You'll need, at least " << minCourses(a, b, c, required, d) << " courses." << endl;
            }
            else
            {
                cout << required << endl;
            }
    }
}

 /* Helper function to calclate the desired average
 */
int calculateScoreNeeded(int takenSoFar, int currentAverage, int taking, int wantedAverage)
{
    return ((wantedAverage * (takenSoFar + taking)) - currentAverage*takenSoFar)/taking;
}

/*
 * Outputs minimum coursex required for certain average.
 */

int minCourses(int takenSoFar, int currentAverage, int taking, int requiredAverage, int wantedAverage)
 {
     int t(taking);
     for (int i(requiredAverage); i > 100; i--)
     {
         if (calculateScoreNeeded(takenSoFar, currentAverage, taking, wantedAverage)>100)
            t++;
     }
     return t;
 }
