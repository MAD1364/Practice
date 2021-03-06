/*
    File: Computer_Programming_Practice_91.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P91
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

void getExpression ( double &operand1, char &operatr, double &operand2 );

double switchCalculations ( double operand1, char operatr, double operand2, double result );

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
        cout << "Output file failed to open. ***Program Terminating.***" << endl;

        system ("PAUSE > NUL");

        return -1;
    }

    cout << "Enter a binary expression of the form Operand operator Operand: ";
    getExpression ( operand1, operatr, operand2 );

    result = switchCalculations ( operand1, operatr, operand2, result );

    printResults ( fout, operand1, operatr, operand2, result);

    cout << endl
         << "Results have been written to switch_calculations_2.txt" << endl;

    system ("PAUSE > NUL");

    return 0;
}

void getExpression ( double &operand1, char &operatr, double &operand2 )
{
    cin >> operand1 >> operatr >> operand2;
}

double switchCalculations ( double operand1, char operatr, double operand2, double result )
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

    cout << endl
         << fixed << setprecision(1);

    if ( (operatr == '+' || operatr == '-' || operatr == '*' || operatr == '/') && operand2 != 0 )
    {
        fout << operand1 << " " << operatr << " " << operand2 << " = " << result << endl;

        cout << operand1 << " " << operatr << " " << operand2 << " = " << result << endl;
    }
    else if ( operand2 == 0 && operatr == '/' )
    {
        fout << operand1 << " " << operatr << " " << operand2 << "  Division by zero is undefined." << endl;

        cout << operand1 << " " << operatr << " " << operand2 << "  Division by zero is undefined." << endl;
    }
    else if ( operatr != '+' && operatr != '-' && operatr != '*' && operatr != '/' )
    {
        fout << operand1 << " " << operatr << " " << operand2 << "  Encountered an unknown operator." << endl;

        cout << operand1 << " " << operatr << " " << operand2 << "  Encountered an unknown operator." << endl;
    }
}
