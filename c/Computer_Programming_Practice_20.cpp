/*
    File: Computer_Programming_Practice_20.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Secion: L07
    Program: P20
    --/--/--

    This program
        - prompts the user to enter values for variables x and y on lines one
          and three, respectively
        - displays the user input on lines two and four, respectively
        - performs calculations involving the user input
        - prints the results of the calculations on lines five and six in
          statements describing the calculations performed
        - leaves line seven blank
        - prompts the user to enter the amount of weight, in pounds, they can
          lift on line eight
        - displays the user input on line nine
        - performs a calculation that converts weight in terms of pounds to
          weight in kilograms
        - prints the result of the calculation involving the user input on line
          ten

    Input (Keyboard): x, y, and user_lbs_lift
    Constants: none
    Output (display):
            Sample output:
                   Enter a value for X
                   <x>
                   Enter a value for Y
                   <y>
                   X cubed = <x*x*x>
                   Y + 10 = <y + 10>
                   <blank line>
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

    cout << "Enter a value for X" << endl;
    cin  >> x;

    cout << "Enter a value for Y" << endl;
    cin  >> y;

    x = x * x * x;
    y = y + 10;

    cout << "X cubed = " << x << endl
         << "Y + 10 = " << y << endl << endl;

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift " << user_kgs_lift << "kilograms" << endl;

    return 0;


}
