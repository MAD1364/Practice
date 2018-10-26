/*
    File: Computer_Programming_Practice_6.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P6
    Lab Section: L07
    --/--/--

    This program takes user input in the form of an integer and indicated to
    the user the number they entered in the interface.

    Input: none
    Constants: none
    Output: "Please enter a number " : User will enter a number and submit their
                                       entry.

            "You entered the number "

*/

#include <iostream>

using namespace std;

int main ( )
{
    int user_num;

    cout << "Please enter a number" << endl << endl;

    cin  >> user_num;

    cout << "You entered the number" << " " << user_num << endl;

    return 0;

}
