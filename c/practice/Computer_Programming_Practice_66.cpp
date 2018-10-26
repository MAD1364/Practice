/*
    File: Computer_Programming_Practice_66.cpp

    Author: Mario Delagarza
    C.S.1428.011
    Lab Section: L07
    Program: P66
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main ( )
{
    double operand1,
           operand2;

    char operatr;


    cout << "Enter a binary expression of the form operand operator operand: ";
    cin  >> operand1 >> operatr >> operand2;

    switch ( operatr )
    {
        case '+':
            cout << endl << operand1 << " + " << operand2 << " = " << operand1 + operand2;
            break;

        case '-':
            cout << endl << operand1 << " - " << operand2 << " = " << operand1 - operand2;
            break;

        case '*':
            cout << endl << operand1 << " * " << operand2 << " = " << operand1 * operand2;
            break;

        case '/':
            {
                if ( operand2 == 0 )
                {
                    cout << endl << operand1 << " / " << operand2 << "  Division by zero is undefined.";
                }
                else
                {
                    cout << endl << operand1 << " / " << operand2 << " = " << operand1 / operand2;
                }
            }
            break;

        default:
            cout << endl << operand1 << " " << operatr << " " << operand2 << "  Encountered unknown operator.";
            break;
    }

    cout << endl;

    system ("PAUSE > NUL");

    return 0;
}
