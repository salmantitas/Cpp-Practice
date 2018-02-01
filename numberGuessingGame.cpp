#include <iostream>
#include "numberGuessingGame.h"
#include "userInput.h"

using namespace std;

/*
 * A game where a random number is chosen according to the range give by the user.
 * Every time the user makes a guess, a message will inform the player if they are
 * too low or too high. When the user gets the correct answer, a congratulating
 * message will be output along with the number of attempts.
 */

void numberGuessingGame()
{
    int minRange(getIntFromUser("Minimum Range of Number: "));
    int maxRange(getIntFromUser("Maximum Range of Number: "));
    int attempt = 1;
    int gameNum = rand() % (maxRange-minRange) + minRange;
    int input(getIntFromUser("Guess a number: "));
    while (input != gameNum)
    {
        if (input > gameNum)
        {
            cout << "Too high!" << endl;
            attempt++;
        }
        if (input < gameNum)
        {
            cout << "Too low!" << endl;
            attempt++;
        }
        input = getIntFromUser("Guess again:");
    }
    if (attempt == 1)
    {
        cout << "Congratulations! You made the right guess! It took you 1 attempt!" << endl;
    }
    else
    {
        cout << "Congratulations! You made the right guess! It took you " << attempt <<
        " attempts!" << endl;
    }
}
