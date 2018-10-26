/*
    File: Computer_Programming_Practice_36.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P36
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>

using namespace std;

int main ()
{
    int number,
        total;

    cout << "Enter a number to find the summation of numbers from 0 to the"
         << " number chosen: ";
    cin  >> number;

    for ( int i = 0; i <= number; i++ )
    {
        total = ( i * ( i + 1 )) / 2;
    }

    cout << "Total : " << total << endl;

    return 0;

}

