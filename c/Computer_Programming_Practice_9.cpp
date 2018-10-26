/*
    File: Computer_Programming_Practice_9.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P9
    Lab Section: L07
    --/--/--

    This program
        - prompts the user to enter values for variables x and y on lines one
          and three, respectively
        - reads the user input for the variables x and y on lines two and four,
          respectively
        - prints the results of calculations involving the squaring of the value
          entered for the variable x and the sum of 10 and the value entered for
          the variable y on lines five and six, respectively

    Input: x and y
    Constants: none
    Output:
            "Enter a number for X"

            "Enter a number for Y"

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

    cout << "X squared =" << " " << x << endl;

    y + 10;

    cout << "Y + 10 =" << " " << y << endl;

    return 0;

}
