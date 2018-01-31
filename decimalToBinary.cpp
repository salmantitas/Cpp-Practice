#include <iostream>
#include <cmath>
#include "decimalToBinary.h"
#include "userInput.h"

using namespace std;

/*
 * Takes a decimal integer from the user and prints it in binary
 */

void decimalToBinary()
{
    int input(getIntFromUser("Enter the decimal number you would like to convert to binary: "));
    cout << convertToBinary(input) << endl;
}

/*
 * Converts decimal integer to binary
 */

int convertToBinary(int input)
{
    if (input == 0 || input == 1) {return input;}
    int output = 0 ;
    int count = 0;
    int rem = 0;
    for (int i = input; i > 1; i /= 2) {
        int temp = i;
        rem = temp % 2;
        output += (expo(10, count)*rem);
        count++;
    }
    output += expo(10, count);
    return output;
}

/*
 * Returns a to the power of b
 */

int expo(int a, int b)
{
    int temp = 1;
    for (int i = 0; i < b; i++)
    {
        temp *= a;
    }
    return temp;
}
