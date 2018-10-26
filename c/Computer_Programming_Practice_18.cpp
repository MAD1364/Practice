/*
    File: Computer_Programming_Practice_18.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P18
    --/--/--

    This program


    Input (keyboard) : meals_ordered             (integer)
    Constants:
            PRIX_FIXE = 75.50        (double)
            SALES_TAX_RATE = .0825   (double)
            TIP_PERCENTAGE = .15     (double)
    Output (display):

            Enter the amount of Prix Fixe meals ordered

            Prix Fixe Price            $   75.50
                                         x     8
            Total for <?> meals:          604.00
            Sales Tax @8.25%               49.83
            15% Tip                        98.07
            Total Due:                 $  751.90
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double PRIX_FIXE = 75.50,
                 SALES_TAX_RATE = .0825,
                 TIP_PERCENTAGE = .15;

    int meals_ordered;

    double subtotal,
           tax,
           total_with_tax,
           tip,
           total_due;

    cout << "Enter the amount of Prix Fixe meals ordered ";
    cin  >> meals_ordered;

    subtotal = meals_ordered * PRIX_FIXE,
    tax = subtotal * SALES_TAX_RATE,
    total_with_tax = subtotal + tax,
    tip = total_with_tax * TIP_PERCENTAGE,
    total_due = total_with_tax + tip;

    cout << endl << endl
         << fixed << setprecision(2) << endl
         << "Prix Fixe Price       $  " << setw(6) << PRIX_FIXE << endl
         << "                        x" << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals:       " << setw(6)
         << subtotal << endl
         << "Sales Tax @" << SALES_TAX_RATE * 100 << "%         "
         << setw(6) << tax << endl
         << setprecision(0) << TIP_PERCENTAGE * 100 << "%                      "
         << setw(6) << setprecision(2) << tip << endl
         << "Total Due:            $  " << setw(6) << total_due << endl;

    system ("PAUSE > NUL");

    return 0;

}
