/*
    File: Computer_Programming_Practice_17.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P17
    --/--/--

    This program simulates the information typically found on a restaurant
    receipt. The program prints to the display statements describing
    calculations the program executes in order to determine the subtotal, tax,
    total with tax, tip, and total due of ordering a number of meals from the
    restaurant based on the prix fixe tradition of ordering food characteristic
    of European restaurants.

    ============================================================================

    Prix Fixe meals are particular to restaurants that serve meals according to
    a predetermined menu with items the restaurant prepared for the day.
    Customers have the option to choose from several menu items coordinated
    together as parts of mulitple course meals and may not deviate from the
    items available in each selection.

    Input (keyboard): meals_ordered             (integer)
    Constants:

                      PRIX_FIXE = 50.00         (double)
                      SALES_TAX_RATE = .0825    (double)
                      TIP_PERCENTAGE = .15      (double)
    Output (console):
          Sample Output:

           "Enter the amount of Prix Fixe meals ordered: "
           <blank line>
           <blank line>
           Author Name
           C.S.1428.001
           Lab Section: L07
           --/--/--

           "Prix Fixe Price:    $   50.00"
           "                      x     8"
           "Total for 8 meals:     400.00"
           "Sales Tax @8.25%        33.00"
           "15% Tip                 64.95"
           "Total Due:          $  497.95"

*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double PRIX_FIXE = 75.50,
                 SALES_TAX_RATE = .0850,
                 TIP_PERCENTAGE = .15;

    int meals_ordered;

    cout << "Enter the amount of Prix Fixe meals: ";
    cin  >> meals_ordered;

    double subtotal = meals_ordered * PRIX_FIXE,
           tax = subtotal * SALES_TAX_RATE,
           total_with_tax = subtotal + tax,
           tip = total_with_tax * TIP_PERCENTAGE,
           total_due = total_with_tax + tip;

    cout << endl << endl
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl;

    cout << fixed << setprecision(2) << endl
         << "Prix Fixe Price:    $  " << setw(6) << PRIX_FIXE << endl
         << "                      x" << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals:     " << setw(6)
         << subtotal <<endl
         << "Sales Tax @" << SALES_TAX_RATE * 100 << "%       "
         << setw(6) << tax << endl
         << fixed << setprecision(0) << TIP_PERCENTAGE * 100
         << "% Tip                " <<fixed << setprecision(2) << setw(6)
         << tip <<endl
         << "Total Due:          $  " << setw(6) << total_due << endl;

         system ("PAUSE > NUL");

         return 0;

}
