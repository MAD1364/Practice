/*
    File: Computer_Programming_Practice_35.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P35
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>

using namespace std;

int main()
{
    long double value;


    cout << "The size of a short is " << sizeof(short)
         << " bytes. \n";

    cout << "The size of an integer is " << sizeof(int)
         << " bytes. \n";

    cout << "The size of a long integer is " << sizeof(long)
         << " bytes. \n";

    cout << "\nThe size of a float is " << sizeof(float)
         << " bytes. \n";

    cout << "The size of a double is " << sizeof(double)
         << " bytes. \n";

    cout << "The size of a long double is " << sizeof(value)
         << " bytes. \n";

    return 0;
}
