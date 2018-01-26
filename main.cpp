#include <iostream>

using namespace std;

int scoreNeededForAverage(int takenSoFar, int currentAverage, int taking, int wantedAverage) {
    return ((wantedAverage * (takenSoFar + taking)) - currentAverage*takenSoFar)/taking;
}

int main()
{
    int required = scoreNeededForAverage(8, 72, 5, 73);
    if (required > 100) {
        cout << "An average of that score cannot be reached at the moment." << endl;
    }
    else {
    cout << required << endl;
    }
    return 0;
}
 /* Returns the required score per course for desired average
  * (currentAverage*takenSoFar + taking*requiredPerCourse)/(takensoFar + taking ) = newAverage
  */


