/*
     File: Computer_Programming_Practice_14.cpp

     Author: Mario Delagarza
     C.S.1428.001
     Lab Section: L07
     Program: #P14
     --/--/--

     This program
          - prompts the user to enter two values for variables, x and y on lines
            one and three, respectively
          - prints the user input for the variables specified on lines two and
            four
          - prints the results of calculations performed, involving the values
            designated to the variables specified, on lines five and six
          - leaves line 7 blank
          - prompts the user to enter a value for the amount of weight they can
            lift, in terms of pounds on line eight
          - prints the amount of weight, in pounds, the user can lift on line
            nine
          - prints the result of a calculation involving the conversion of
            weight from pounds to kilograms and informs the user of that amount,
            regarding the amount they entered, on line ten

     Input: x, y, and user_lbs_lift
     Constants: none
     Output:
             "Enter a value for X"
             <user input>
             "Enter a value for Y"
             <user input>
             "X cubed = <?>"
             "Y + 10 = <?>"

             "How many pounds can you lift?"
             <user input>
             "You can lift <?> kilograms"

*/

#include <iostream>

using namespace std;

int main ( )
{
    int x;
    int y;
    int user_lbs_lift;
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

    user_kgs_lift = user_lbs_lift / 2.20641,

    cout << "You can lift " << user_kgs_lift << " kilograms." << endl;

    return 0;
}
