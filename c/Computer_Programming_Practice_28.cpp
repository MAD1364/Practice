/*
    File: Computer_Programming_Practice_28.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P28
    --/--/--

    This program prints to the display a virtual representation of a
    restaurant receipt. The information on the receipt includes the price for a
    meal, the subtotal for a number of meals specified by the user of the
    program, the sales tax, the total with tax, the tip, and the total due.

    Input (keyboard): meals_ordered            (integer)
    Constants:        PRIX_FIXE                (double)
                      SALES_TAX_RATE           (double)
                      TIP_PERCENTAGE           (double)
    Output (display):
            Sample Output:
                      Enter the number of Prix Fixe meals ordered:

                      Prix Fixe Price:        $   50.00
                                                x
                      Total for 8 meals          400.00
                      Sales Tax @8.25%            33.00
                      15% Tip                     64.95
                      Total Due:              $  497.95

*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double PRIX_FIXE = 50.00,
                 SALES_TAX_RATE = .0825,
                 TIP_PERCENTAGE = .15;

    double subtotal,
           tax,
           total_with_tax,
           tip,
           total_due;

    int meals_ordered;


    cout << "Enter the amount of meals ordered: ";
    cin  >> meals_ordered;

    subtotal = meals_ordered * PRIX_FIXE;
    tax = subtotal * SALES_TAX_RATE;
    total_with_tax = subtotal + tax;
    tip = total_with_tax * TIP_PERCENTAGE;
    total_due = total_with_tax + tip;

    cout << fixed << setprecision(2) << endl
         << "Prix Fixe Price:        $  " << setw(6) << PRIX_FIXE << endl
         << "                          x" << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals          " << setw(6) << subtotal << endl
         << "Sales Tax @" << SALES_TAX_RATE * 100 << "%           " << setw(6) << tax << endl
         << setprecision(0) << TIP_PERCENTAGE * 100 << "% Tip                    " << setw(6) << setprecision(2) << tip << endl
         << "Total Due:              $  " << setw(6) << total_due << endl;

    system ("PAUSE > NUL");

    return 0;

}
