/*
    File: Computer_Programming_Practice_15.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P15
    --/--/--

    This program
        - prompts the user to enter values for variables, x and y, on the first
          and third lines of the display, respectively
        - prints the user input on lines two and four, respectively
        - executes calculations involving the user input for both variables and
          displays the results of the calculations in the context of statements
          describing the calculations performed on lines five and six,
          respectively
        - leaves line seven blank
        - prompts the user to enter the amount of weight, in pounds, they can
          lift on the eighth line of display
        - prints the user input on line nine of the display
        - executes a calculation using a formula that converts values in pounds
          to kilograms, and displays the result of converting the user's input
          to a value representing an amount in kilograms on the tenth line of
          display

    Input (keyboard): x, y, user_lbs_lift
    Constants: none
    Output (console):
             "Enter a value for X"
             <user input>
             "Enter a value for Y"
             <user input>
             "X cubed = <?>"        // '?' is replaced by the result of x cubed
             "Y + 10 = <?>"         // '?' is replaced by the result of the sum

             "How many pounds can you lift?"
             <user input>
             "You can lift <?> kilograms"  // '?' is replaced by the converted
                                              amount

*/

#include <iostream>

using namespace std;

int main ( )
{
    int x,
        y,
        user_lbs_lift;

    double user_kgs_lift;

    cout << "Enter a value for X" << endl;
    cin  >> x;

    cout << "Enter a value for Y" << endl;
    cin  >> y;

    x = x * x * x,
    y = y + 10;

    cout << "X cubed = " << x << endl
         << "Y + 10 = " << y << endl << endl;

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift " << user_kgs_lift << " kilograms." << endl;

    return 0;

}
