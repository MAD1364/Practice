/*
    File: Computer_Programming_Practice.cpp

    Author: Mario Delgarza
    C.S.1428.001
    Program: P10
    Lab Section: L07
    --/--/--

    This program
        - prompts the user to enter numbers in the form of integers for the
          values of variables x and y on lines one and three, respectively
        - reads the user input and displays the user input on lines two and four
          , respectively
        - prints the results of calculations performed on the values of the
          integers the user entered on lines five and six, specifically, the
          value of x squared and the sum of 10 and y, respectively

    Input: x and y
    Constants: none
    Output:
            "Enter a number for X"
            <user input>
            "Enter a number for Y"
            <user input>
            "X squared = <?>"
            "Y + 10 = <?>"

*/

#include <iostream>

using namespace std;

int main ( )
{
    int x;
    int y;

    cout << "Enter a number for X" << endl;
    cin  >> x;

    cout << "Enter a number for Y" << endl;
    cin  >> y;

    x *= x;
    y += 10;

    cout << "X squared =" << " " << x << endl
         << "Y + 10 =" << " " << y << endl;

    return 0;

}
