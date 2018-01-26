#include <iostream>

using namespace std;

 /* Returns the required score per course for desired average
  * (currentAverage*takenSoFar + taking*requiredPerCourse)/(takensoFar + taking ) = newAverage
  */
int scoreNeededForAverage(int takenSoFar, int currentAverage, int taking, int wantedAverage)
{
    return ((wantedAverage * (takenSoFar + taking)) - currentAverage*takenSoFar)/taking;
}

int main()
{
    cout << "Enter the number of courses you have taken: ";
    int a;
    cin >> a;
    cout << "Enter your current average: ";
    int b;
    cin >> b;
    cout << "Enter the number of courses you are taking: ";
    int c;
    cin >> c;
    cout << "Enter your desired average: ";
    int d;
    cin >> d;
    int required = scoreNeededForAverage(a, b, c, d);
    if (required > 100) {
        cout << "An average of that score cannot be reached at the moment." << endl;
    }
    else {
    cout << required << endl;
    }
    return 0;
}



