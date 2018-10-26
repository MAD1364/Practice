/*
     File: Computer_Programming_Practice_13.cpp

     Author: Mario Delagarza
     C.S.1428.001
     Program: P13
     Lab Section: L07
     --/--/--

     This program
          - prompts the user to enter values for variables x and y on lines one
            and two
          - prints the user's input on lines two and four, respectively
          - executes calculations involving the user's input for the variables
            and prints the results of the calculations in the context of
            statements describing the calculation performed with each variable
            on lines five and six, respectively
          - prompts the user to enter the amount of weight, in pounds, they can
            lift on line eight
          - performs a calculation involving the conversion from pounds to
            kilograms using the user's input
          - prints the result of the calculation on line nine in a statement
            informing the user of the amount of weight they can lift in
            kilograms based on their input

     Input: x and y
     Constants: none
     Output:
             "Enter a value for X"
             <user input>
             "Enter a valuer for Y"
             <user input>
             "X cubed = <result>"
             "Y + 10 = <result>"

             "How many pounds can you lift?"
             <user input>
             "You can lift <results> kilograms"
*/

#include <iostream>

using namespace std;

int main ( )
{
    int x;
    int y;

    cout << "Enter a value for X" << endl;
    cin  >> x;

    cout << "Enter a value for Y" << endl;
    cin  >> y;

    x = x * x * x;
    y = y + 10;

    cout << "X cubed = " << x << endl
         << "Y + 10 = " << y << endl << endl;

    int user_lbs_lift;
    double user_kgs_lift;

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift " << user_kgs_lift << " kilograms." << endl;

    return 0;

}
