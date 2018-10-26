/*
    File: Computer_Programming_Practice_43.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P44
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
    fout.open ("switch_calculations.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        return -1;
    }

    cout << "Enter a binary expression of the form: operand operator operand ";
    cin  >> operand1 >> operatr >> operand2;

    fout << fixed << setprecision(1)
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "Program: P44" << endl
         << "--/--/--" << endl << endl;

    switch ( operatr )
    {
        case '+':
            fout << operand1 << " " << operatr << " " << operand2 << " = " << operand1 + operand2;
            break;

        case '-':
            fout << operand1 << " " << operatr << " " << operand2 << " = " << operand1 - operand2;
            break;

        case '*':
            fout << operand1 << " " << operatr << " " << operand2 << " = " << operand1 * operand2;
            break;

        case '/':
            {
                if ( operand2 == 0 )

                    fout << operand1 << " " << operatr << " " << operand2
                         << "  Division by zero produces an undefined result.";

                else
                    fout << operand1 << " " << operatr << " " << operand2 << " = " << operand1 / operand2;
            }
            break;

        default:
            fout << operand1 << " " << operatr << " " << operand2
                 << "  Encountered unknown operator.";
            break;
    }


    cout << endl << endl
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "Program: P44" << endl
         << "--/--/--" << endl << endl;

    cout << "Program results have been written to the file switch_calculations.txt" << endl;


    system ("PAUSE > NUL");

    return 0;
}
