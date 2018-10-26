/*
    File: Computer_Programming_Practice_77.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P77
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
    const double DISCOUNT_PERCENTAGE = .20,
                 FREE_SHIPPING_LIMIT = 150.00,
                 SHIPPING_CHARGE = 8.50,
                 SALES_TAX_RATE = .0825;

    double price_of_item,
           total = 0.0,
           shipping,
           discounted_total,
           tax,
           amount_owed;

    int number_of_items;

    ofstream fout;
    fout.open ("prog4_001out.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        return -1;
    }

    cout << "Enter the number of items purchased: ";
    cin  >> number_of_items;

    cout << endl;

    if ( number_of_items == 0 )
    {
        cout << endl
             << "Come back again soon!" << endl;

        return -2;
    }

    for ( int i = 0; i < number_of_items; i++ )
    {
        cout << "Enter the item price: ";
        cin  >> price_of_item;

        total = total + price_of_item;
    }

    discounted_total = total - ( total * DISCOUNT_PERCENTAGE );

    if ( discounted_total >= FREE_SHIPPING_LIMIT )
    {
        shipping = 0;
    }
    else
    {
        shipping = SHIPPING_CHARGE;
    }

    tax = discounted_total * SALES_TAX_RATE;
    amount_owed = discounted_total + shipping + tax;

    fout << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl
         << fixed << setprecision(2)
         << "Total Purchases:    $" << setw(6) << total << endl
         << "Discounted Total:    " << setw(6) << discounted_total << endl
         << "Tax Rate:            " << setw(8) << setprecision(4) << SALES_TAX_RATE << endl
         << "Tax:                 " << setw(6) << setprecision(2) << tax << endl
         << "Shipping:            " << setw(6) << shipping << endl << endl
         << "Total Amount Due:   $" << setw(6) << amount_owed << endl;


    cout << endl
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl
         << fixed << setprecision (2)
         << "Total Purchases:    $" << setw(6) << total << endl
         << "Discounted Total:    " << setw(6) << discounted_total << endl
         << "Tax Rate:            " << setw(8) << setprecision(4) << SALES_TAX_RATE << endl
         << "Tax:                 " << setw(6) << setprecision(2) << tax << endl
         << "Shipping:            " << setw(6) << shipping << endl << endl
         << "Total Amount Due:   $" << setw(6) << amount_owed << endl << endl << endl
         << "A copy for your records can be found in prog4_001out.txt" << endl;

    system ("PAUSE > NUL");

    fout.close();

    return 0;
}
