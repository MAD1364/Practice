/*
    File: Computer_Programming_Practice_56.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P56
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main ( )
{
    const double PRIX_FIXE = 50.00,
                 SALES_TAX_RATE = .0825,
                 TIP_PERCENTAGE = .15;

    int meals_ordered;

    double subtotal,
           tax,
           total_with_tax,
           tip,
           total_due;

    cout << "Enter the amount of Prix Fixe meals ordered: ";
    cin  >> meals_ordered;

    subtotal = PRIX_FIXE * meals_ordered;
    tax = subtotal * SALES_TAX_RATE;
    total_with_tax = subtotal + tax;
    tip = total_with_tax * TIP_PERCENTAGE;
    total_due = total_with_tax + tip;

    cout << endl << endl
         << fixed << setprecision(2)
         << "PRIX FIXE:            $  " << setw(6) << PRIX_FIXE << endl
         << "                        x" << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals        " << setw(6) << subtotal << endl
         << "Sales Tax @" << SALES_TAX_RATE * 100 << "%         " << setw(6) << tax << endl
         << setprecision(0) << TIP_PERCENTAGE * 100 << "% Tip                  " << setw(6) << setprecision(2) << tip << endl
         << "Total Due:               " << setw(6) << total_due << endl;

    system("PAUSE > NUL");

    return 0;
}
