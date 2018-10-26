/*
     File: Computer_Programming_Practice_7.cpp

     Author: Mario Delagarza
     C.S.1428.001
     Program: P7
     Lab Section: L07
     --/--/--

     This program executes simple arithmetic calculations involving the
     addition, multiplication, and modulo operators.

     Input: none
     Constants: none
     Output:
             4 + 6 % 3 = 4
             5 + 6 * 3 = 23
             (5 + 6) * 3 = 33

             a *=  2 + 5 = 35
*/

#include <iostream>

using namespace std;

int main ( )
{
    cout << "4 + 6 % 3 = " << 4 + 6 % 3 << endl
         << "5 + 6 * 3 = " << 5 + 6 * 3 << endl
         << "(5 + 6) * 3 = " << (5 + 6) * 3 << endl << endl;

    int a = 5;

    a *= 2 + 5;

    cout << "a = " << a << endl << endl;

    int intA = 4;
    double intB = 3.0;

    cout << "intA / intB = " << ( intA / intB ) << endl;

    return 0;

}
