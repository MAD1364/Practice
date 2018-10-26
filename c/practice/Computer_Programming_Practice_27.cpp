/*
    File: Computer_Programming_Practice_27.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P27
    --/--/--

    This program
        - prompts the user to enter values for two variables x and y on lines
          one and three, respectively
        - prints the user input on lines two and four
        - performs calculations using the user input for the variables
        - prints the results of the calculations on lines five and six
        - leaves line seven blank
        - prompts the user to enter the amount of weight in pounds they can lift
          on line eight
        - performs a calculations using the user input that converts amounts in
          pounds to kilograms
        - prints the result of the calculation in the context of a statement
          informing the user the amount of weight they can lift in kilograms
          based on their input.

    Input (keyboard): x, y, user_lbs_lift
    Constants: none
    Output (display):
            Sample Display:
                    Enter a value for X
                    <x>
                    Enter a value for Y
                    <y>
                    X cubed = <x*x*x>
                    Y + 10 = <y+10>
                    <leave blank>
                    How many pounds can you lift?
                    <user_lbs_lift>
                    You can lift <user_kgs_lift>

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
         << "Y + 10 = " << y << endl<< endl;

    system ("PAUSE > NUL");

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift " << user_kgs_lift << endl;

    system ("PAUSE > NUL");

    return 0;

}
