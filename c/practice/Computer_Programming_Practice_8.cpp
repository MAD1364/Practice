/*
    File: Computer_Programming_Practice_8.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P8
    Lab Section: L07
    --/--/--

    This program uses user input to execute calculations based on the conversion
    of temperature between that of degrees farenheit and degrees celsius.

    Input: tempf
    Constants: none
    Output:
            "Please enter a temperature in farenheit" : User enters a number

            tempf F = tempc C
*/

#include <iostream>

using namespace std;

int main ( )
{
    float tempF;
    float tempC;

    cout << "Please enter a temperature in farenheit:" << endl;

    cin  >> tempF;

    tempC = (tempF - 32) * (5.0 / 9);

    cout << tempF << "F = " << tempC << "C" << endl;

    return 0;

}
