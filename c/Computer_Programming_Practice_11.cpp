/*
    File: Computer_Programming_Practice_11.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P11
    Lab Section: L07
    --/--/--

    This program
        - prompts the user to enter an amount specified as the amount of weight
          they can lift in pounds on the first line of the display
        - reads the amount entered by the user and displays the user input on
          the second line
        - performs a calculation involving the conversion of weight in pounds to
          kilograms and displays the result on the third line of the display

    Input: user_lbs_lift
    Constants: none
    Output:
            "How many pounds can you lift?"
            "<user input>"                  // <user input> replaced with actual user input
            "You can lift <?> kilograms"    // <?> to be replaced with kilograms

*/

#include <iostream>

using namespace std;

int main ( )
{
    int user_lbs_lift;
    float user_kg_lift;

    cout << "How many pounds can you lift?" << endl;
    cin  >> user_lbs_lift;

    user_kg_lift = user_lbs_lift / 2.20461;

    cout << "You can lift" << " " << user_kg_lift << " " << "kilograms" << endl;

    return 0;


}
