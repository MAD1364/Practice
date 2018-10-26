/*
    File: Computer_Programming_Practice_26.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P26
    --/--/--

    This program prints to the display what resembles a restaurant receipt. The
    Program uses user input to calculate the subtotal, tax, total with tax, tip,
    and the total due. The display specifies each of these values and indicates
    the amounts.

    Input (Keyboard): meals_ordered        (integer)
    Constants:        PRIX_FIXE            (double)
                      SALES_TAX_RATE       (double)
                      TIP_PERCENTAGE       (double)
    Output (display):
            Sample Output:
                    Enter the number of Prix Fixe meals ordered: <meals_ordered>

                    Prix Fixe Price:            $   50.00
                                                  x     8
                    Total for 8 meals              400.00
                    Sales Tax @8.25%                33.00
                    15% Tip                         64.95
                    Total Due:                  $  497.95
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

    int meals_ordered;

    double subtotal,
           tax,
           total_with_tax,
           tip,
           total_due;

    cout << "Enter the amount of meals ordered: ";
    cin  >> meals_ordered;

    subtotal = meals_ordered * PRIX_FIXE;
    tax = subtotal * SALES_TAX_RATE;
    total_with_tax = subtotal + tax;
    tip = total_with_tax * TIP_PERCENTAGE;
    total_due = total_with_tax + tip;

    cout << endl << endl
         << fixed << setprecision(2) << endl
         << "Prix Fixe Price:           $  " << setw(6) << PRIX_FIXE << endl
         << "                            x " << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals             " << setw(6) << subtotal << endl
         << "Sales Tax @" << SALES_TAX_RATE * 100 << "%              " << setw(6) << tax << endl
         << setprecision(0) << TIP_PERCENTAGE * 100 << "% Tip                       " << setw(6) << setprecision(2) << tip << endl
         << "Total Due:                 $  " << setw(6) << total_due << endl;

         system("PAUSE > NUL");

         return 0;

}
