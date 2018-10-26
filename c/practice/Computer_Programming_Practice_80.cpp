/*
    File: Computer_Programming_Practice_80.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P80
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    double operand1,
           operand2;

    char operatr;

    ofstream fout;
    fout.open ("calculations_0.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        return -1;
    }

    cout << "Enter a binary expression of the form operand operator operand: ";
    cin  >> operand1 >> operatr >> operand2;

    fout << fixed << setprecision(1)
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl;

    switch ( operatr )
    {
        case '+':
            fout << operand1 << " + " << operand2 << " = " << operand1 + operand2;

            cout << endl << operand1 << " + " << operand2 << " = " << operand1 + operand2;
            break;

        case '-':
            fout << operand1 << " - " << operand2 << " = " << operand1 - operand2;

            cout << endl << operand2 << " - " << operand2 << " = " << operand1 - operand2;
            break;

        case '*':
            fout << operand1 << " * " << operand2 << " = " << operand1 * operand2;

            cout << endl << operand1 << " * " << operand2 << " = " << operand1 * operand2;
            break;

        case '/':
            if ( operand2 == 0.0 )
            {
                fout << operand1 << " / " << operand2 << "  Division by zero is undefined" << endl;

                cout << endl << operand1 << " / " << operand2 << "  Division by zero is undefined" << endl;
            }
            else
            {
                fout << operand1 << " / " << operand2 << " = " << operand1 / operand2;

                cout << endl << operand1 << " / " << operand2 << " = " << operand1 / operand2;
            }
            break;

        default:
            fout << operand1 << " " << operatr << " " << operand2 << "  Encountered unknown operator" << endl;

            cout << endl << operand1 << " " << operatr << " " << operand2 << "  Encountered unknown operator" << endl;
            break;
    }

    cout << endl
         << "Program results have been written to calculations_0.txt" << endl;

    fout.close ( );

    system ("PAUSE >NUL");

    return 0;
}
