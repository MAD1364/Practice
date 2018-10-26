/*
    File: Computer_Programming_Practice_90.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P90
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

void getExpression ( double &operand1, char &operatr, double &operand2 );

double operatrCalculations ( double operand1, char operatr, double operand2, double result );

void printResults ( ofstream &fout, double operand1, char operatr, double operand2, double result );

int main ( )
{
    double operand1,
           operand2,
           result;

    char operatr;

    ofstream fout;
    fout.open ("switch_calculations_2.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        system ("PAUSE > NUL");

        return -1;
    }

    cout << "Enter a binary expression of the form Operand operator Operand: ";

    getExpression ( operand1, operatr, operand2 );

    result = operatrCalculations ( operand1, operatr, operand2, result );

    printResults ( fout, operand1, operatr, operand2, result );

    cout << endl << endl
         << "Results have been written to switch_calculations_2.txt" << endl;

    system ("PAUSE > NUL");

    return 0;
}

void getExpression ( double &operand1, char &operatr, double &operand2 )
{
    cin >> operand1 >> operatr >> operand2;
}

double operatrCalculations ( double operand1, char operatr, double operand2, double result )
{
    switch ( operatr )
    {
        case '+':
            result = operand1 + operand2;
            break;

        case '-':
            result = operand1 - operand2;
            break;

        case '*':
            result = operand1 * operand2;
            break;

        case '/':
            result = operand1 / operand2;
            break;
    }

    return result;
}

void printResults ( ofstream &fout, double operand1, char operatr, double operand2, double result )
{
    fout << fixed << setprecision(1);

    cout << endl << endl
         << fixed << setprecision(1);

    if ( operand2 == 0 && operatr == '/' )
    {
        fout << operand1 << " " << operatr << " " << operand2 << "  Division by zero is not defined." << endl;

        cout << operand1 << " " << operatr << " " << operand2 << "  Division by zero is not defined." << endl;
    }
    else if ( operatr == '+' || operatr == '-' || operatr == '*' || operatr == '/' )
    {
        fout << operand1 << " " << operatr << " " << operand2 << " = " << result << endl;

        cout << operand1 << " " << operatr << " " << operand2 << " = " << result << endl;
    }
    else if ( operatr != '+' || operatr != '-' || operatr != '*' || operatr != '/' )
    {
        fout << operand1 << " " << operatr << " " << operand2 << "  Encountered an unknown operator." << endl;

        cout << operand1 << " " << operatr << " " << operand2 << "  Encountered an unknown operator." << endl;
    }

}
