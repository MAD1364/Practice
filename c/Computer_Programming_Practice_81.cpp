/*
    File: Computer_Programming_Practice_81.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P81
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
    const double SALES_TAX_RATE = 0.0825,
                 SHIPPING_CHARGE = 8.5,
                 DISCOUNT_AMOUNT = 0.2,
                 FREE_SHIPPING_LIMIT = 150.0;

    double total = 0,
           item_price,
           shipping,
           discounted_amount,
           amount_owed,
           tax;

    int number_of_items;

    ofstream fout;
    fout.open ("sales_receipt.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        return -1;
    }

    cout << "Enter the amount of items being purchase: ";
    cin  >> number_of_items;

    cout << endl;

    if ( number_of_items == 0 )
    {
        cout << "Come back again soon!" << endl;
    }
    else
    {
        for ( int i = 1; i <= number_of_items; i++ )
        {
            cout << "Enter the price of item " << i << ": ";
            cin  >> item_price;

            total = total + item_price;
        }

        discounted_amount = total - ( total * DISCOUNT_AMOUNT );

        if ( discounted_amount > FREE_SHIPPING_LIMIT )
            shipping = 0;
        else
            shipping = SHIPPING_CHARGE;

        tax = discounted_amount * SALES_TAX_RATE;

        amount_owed = discounted_amount + shipping + tax;

        fout << "Mario Delagarza" << endl
             << "C.S.1428.001" << endl
             << "Lab Section: L07" << endl
             << "Program: P81" << endl
             << "--/--/--" << endl << endl;

        fout << fixed << setprecision(2)
             << "Total purchases:    $" << setw(6) << total << endl
             << "Discounted Total:    " << setw(6) << discounted_amount << endl
             << "Tax Rate:            " << setw(8) << setprecision(4) << SALES_TAX_RATE << endl
             << "Tax:                 " << setw(6) << setprecision(2) << tax << endl
             << "Shipping:            " << setw(6) << shipping << endl
             << "Total Amount Due:   $" << setw(6) << amount_owed << endl;

        cout << endl
             << "Mario Delagarza" << endl
             << "C.S.1428.001" << endl
             << "Lab Section: L07" << endl
             << "Program: P81" << endl
             << "--/--/--" << endl << endl;

        cout << fixed << setprecision(2)
             << "Total purchases:    $" << setw(6) << total << endl
             << "Discounted Total:    " << setw(6) << discounted_amount << endl
             << "Tax Rate:            " << setw(8) << setprecision(4) << SALES_TAX_RATE << endl
             << "Tax:                 " << setw(6) << setprecision(2) << tax << endl
             << "Shipping:            " << setw(6) << shipping << endl
             << "Total Amount Due:   $" << setw(6) << amount_owed << endl << endl;

        cout << "A copy for your files can be found in sales_receipt.txt" << endl;
    }

    fout.close ( );

    system ("PAUSE > NUL");

    return 0;
}
