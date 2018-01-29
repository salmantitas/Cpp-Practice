#include "userInput.h"

using namespace std;

 /* Displays the string to the user and takes the returns the input of the user
  */
int getIntFromUser(string s)
{
    int a;
    cout << s << endl;
    cin >> a;
    return a;
}
