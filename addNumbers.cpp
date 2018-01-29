#include "addNumbers.h"
#include "userInput.h"
#include <iostream>

/*
 * Takes numbers from the user and returns their sum.
 */
void addNumbers()
{
    int n(getIntFromUser("How many numbers would you like to add?" ));
    int sum(0);
    int a[n];
    for (int i(0); i < n; i++)
    {
        cout << "Number to be added - " << i+1 << ": " << endl;
        cin >> a[i];
        //a[i] = getValueFromUser("Type the number: ");
        sum += a[i];
    }
    cout << sum << endl;
    //int a = getValueFromUser("Type the first integer to be added: ");
    //int b = getValueFromUser("Type the second integer to be added: ");
    //return a+b;

}
