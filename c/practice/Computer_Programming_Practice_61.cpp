/*
    File: Computer_Programming_Practice_61.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P61
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>

using namespace std;

int main ( )
{
    const double SALES_TAX_RATE = .0825;

    double item_price,
           subtotal,
           total_due;

    subtotal = 0;

    cout << "Please enter the prices of the items you are purchasing or 0 to stop";
    cin  >> item_price;

    while ( item_price != 0 )
    {
        subtotal = subtotal + item_price;

        cout << "Please enter the price of an item or 0 to stop.";
        cin  >> item_price;
    }

    total_due = (subtotal * SALES_TAX_RATE) + subtotal;

    cout << endl << "Your total is " << total_due << endl;

    return 0;
}
