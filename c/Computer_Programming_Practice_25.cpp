/*
    File: Computer_Programming_Practice_25.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P25
    --/--/--

    This program
        - prompts the user to enter values for variables x and y on lines one
          and three, respectively
        - prints the user input for the variables on lines two and four,
          respectively
        - performs calculations using the values comprising the user input and
          prints the results of these calculations in the context of statements
          describing the calculations performed on lines five and six
        - leaves line seven blank
        - prompts the user to enter the amount of weight they can lift in pounds
          on line eight
        - performs a calculation that converts amount of weight in pounds to
          weight in kilograms
        - prints the user input on line nine
        - prints the result of the conversion calculation on line ten

    Input (keyboard): x, y, user_lbs_lift
    Constants: none
    Output (display):
            Sample display:
                Enter a value for X:
                <x>
                Enter a value for Y:
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

    cout << "Enter a value for X:" << endl;
    cin  >> x;

    cout << "Enter a value for Y:" << endl;
    cin  >> y;

    x = x * x * x;
    y = y + 10;

    cout << "X cubed = " << x << endl
         << "Y + 10 = " << y << endl;

    system ("PAUSE > NUL");


    cout << endl
         << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift " << user_kgs_lift << " kilograms" << endl;

    system ("PAUSE > NUL");

    return 0;

}
