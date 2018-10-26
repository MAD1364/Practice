/*
     File: Computer_Programming_Practice_12.cpp

     Author: Mario Delagarza
     C.S.1428.001
     Program: P12
     Lab Section: L07
     --/--/--

     This program
          - prompts the user to enter numbers for the values of two variables, x
            and y on lines one and three of the display, respectively
          - prints the user input for the variables specified on lines two and
            four, respectively
          - performs calculations using the user input for the variables x and y
            and prints the results on the calculations in statements describing
            the calculations on lines five and six, respectively
          - prompts the user to enter the amount of weight, in pounds, they can
            lift on line eight
          - performs a calculation involving the conversion of the amount
            entered from pounds to kilograms
          - prints the result of the calculation in a statement informing the
            user of the the amount they entered in terms of kilograms
*/

#include <iostream>

using namespace std;

int main ( )
{
    int x;
    int y;

    cout << "Enter a number for X." << endl;
    cin  >> x;

    cout << "Enter a number for Y." << endl;
    cin  >> y;

    x = x * x * x;
    y = y +10;

    cout << "X cubed =" << " " << x << endl
         << "Y + 10 =" << " " << y << endl << endl;

    int user_lbs_lift;
    double user_kgs_lift;

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kgs_lift = user_lbs_lift / 2.20641;

    cout << "You can lift" << " " << user_kgs_lift << " kilograms" << " " <<
         endl;

    return 0;
}
