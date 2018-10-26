/*
     File: Computer_Programming_Practice_16.cpp

     Author: Mario Delagarza
     C.S.1428.001
     Lab Section: L07
     Program: P16
     --/--/--

     This program consists of various formulas that print the results of
     calculations required to display information in the context of a receipt
     simulating the calculations involved in determing the subtotal, tax, tip,
     and total of a restaurant meal for one or more individuals dining at the
     restaurant, Prix Fixe. Restaurants in Europe commonly present their
     customers with predetermined menus with course items specified by the
     restaurant for the day. Customers dining in the restaurant have the option
     of choosing a fixed array of dishes according the the predetermination.

     Input (keyboard): meals_ordered        (integer)
     Constants:
             PRIX_FIXE = 50.00              (double)
             SALES_TAX_RATE = .0825         (double)
             TIP_PERCENTAGE = .15           (double)

     Output (console):

         Sample Layout:

             "Enter the number of prix fixe meals ordered: <?>"


             Mario Delagarza
             C.S.1428.001
             Lab Section: L07
             Program: P16
             --/--/--

             Prix Fixe Price:    $   50.00
                                   x     8
             Total for 8 meals:     400.00
             Sales Tax @8.25%        33.00
             15% Tip                 64.95
             Total Due:          $  497.95
*/

#include <iostream>
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

    cout << "Enter the number of prix fixe meals ordered " << endl;
    cin  >> meals_ordered;

    subtotal = PRIX_FIXE * meals_ordered;
    tax = subtotal * SALES_TAX_RATE;
    total_with_tax = subtotal + tax;
    tip = total_with_tax * TIP_PERCENTAGE;
    total_due = total_with_tax + tip;

    cout << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "Program: P16" << endl
         << "--/--/--" << endl;

    cout << fixed << setprecision(2) << endl
         << "Prix Fixe Price:     $  " << setw(6) << PRIX_FIXE << endl
         << "                       x" << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals:      "
         << setw(6) << subtotal << endl
         << "Sales Tax @" << SALES_TAX_RATE * 100 << "%        "
         << setw(6) << tax << endl
         << fixed << setprecision(0) << TIP_PERCENTAGE * 100 <<
         "% Tip                 " << fixed << setprecision(2) << setw(6)
         << tip << endl
         << "Total Due:           $  " << setw(6) << total_due << endl;

}
