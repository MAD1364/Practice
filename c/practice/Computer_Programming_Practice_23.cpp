/*
    File: Computer_Programming_Practice_23.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P23
    --/--/--

    This program
        - prompts the user to enter values for variables x and y on lines one
          and three, respectively
        - displays the user input for these variables, x and y, on lines two and
          four, respectively
        - performs calculations using the user input and displays the results
          of these calculations in the context of statements describing the
          calculations on lines five and six
        - leaves line 7 blank
        - prompts the user to enter the amount of pounds they can lift on line
          eight
        - performs a calculation that converts amounts of weight in terms of
          pounds to kilograms
        - displays the user input for the amount of pounds they can lift on line
          nine
        - prints the amount of weight the user can lift in terms of kilograms on
          line ten

    Input (keyboard): x, y, and user_lbs_lift
    Constants: none
    Output (display):
            Sample display:
                    Enter a value for X
                    <x>
                    Enter a value for Y
                    <y>
                    X cubed = <x*x*x>
                    Y + 10 = <y+10>
                    <leave blank>
                    How many pounds can you lift?
                    <user_lbs_lift>
                    You can lift <user_kgs_lift> kilograms.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main ( )
{
    int x,
        y,
        user_lbs_lift;

    double user_kgs_lift;

    cout << "Enter a value for X: " << endl;
    cin  >> x;

    cout << "Enter a value for Y: " << endl;
    cin  >> y;

    x = x * x * x;
    y = y + 10;

    cout << "X cubed = " << x << endl
         << "Y + 10 = " << y << endl << endl;

    system ("PAUSE > NUL");

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift " << user_kgs_lift << " kilograms." << endl;

    system ("PAUSE > NUL");

    return 0;

    }
