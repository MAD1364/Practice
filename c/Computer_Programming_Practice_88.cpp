/*
    File: Computer_Programming_Practice_88.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P88
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main ( )
{
    double operand1,
           operand2;

    char operatr;

    ofstream fout;
    fout.open ("switch_calculations_0.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        system ("PAUSE > NUL");

        return -1;
    }

    cout << "Enter a binary expression of the form Operand operator Operand: ";
    cin  >> operand1 >> operatr >> operand2;

    fout << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl;

    cout << endl << endl
         << fixed << setprecision(1);

    switch ( operatr )
    {
        case '+':
            cout << operand1 << " + " << operand2 << " = " << operand1 + operand2;

            fout << operand1 << " + " << operand2 << " = " << operand1 + operand2;
            break;

        case '-':
            cout << operand1 << " - " << operand2 << " = " << operand1 - operand2;

            fout << operand1 << " - " << operand2 << " = " << operand1 - operand2;
            break;

        case '*':
            cout << operand1 << " * " << operand2 << " = " << operand1 * operand2;

            fout << operand1 << " * " << operand2 << " = " << operand1 * operand2;
            break;

        case '/':
            if ( operand2 == 0 )
            {
                cout << operand1 << " / " << operand2 << "  Division by zero is not defined." << endl;

                fout << operand1 << " / " << operand2 << "  Division by zero is not defined." << endl;
                break;
            }
            else
            {
                cout << operand1 << " / " << operand2 << " = " << operand1 / operand2;

                fout << operand1 << " / " << operand2 << " = " << operand1 / operand2;
                break;
            }
            break;

        default:
            cout << operand1 << " " << operatr << " " << operand2 << "  Encountered unknown operator." << endl;

            fout << operand1 << " " << operatr << " " << operand2 << "  Encountered unknown operator." << endl;
            break;
    }

    cout << endl << endl
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl;

    cout << "Program results have been written to switch_calculations_0.txt" << endl;

    system ("PAUSE > NUL");

    return 0;
}
