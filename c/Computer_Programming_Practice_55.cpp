/*
    File: Computer_Programming_Practice_55.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P55
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

int main ( )
{
    int payment_amount,
        purchase_amount,
        change,
        number_of_dollar_bills,
        number_of_half_dollars,
        number_of_quarters,
        number_of_dimes,
        number_of_nickels;

    ofstream fout;
    fout.open ("amount_of_change_6.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***";

        return -1;
    }

    cout << "Enter the amount of the purchase (in cents): ";
    cin  >> purchase_amount;

    cout << "Enter the amount of payment received (in cents): ";
    cin  >> payment_amount;


    change = payment_amount - purchase_amount;

    number_of_dollar_bills = change / 100;
    change = change % 100;

    number_of_half_dollars = change / 50;
    change = change % 50;

    number_of_quarters = change / 25;
    change = change % 25;

    number_of_dimes = change / 10;
    change = change % 10;

    number_of_nickels = change / 5;

    change = change % 5;


    fout << fixed << setprecision(2)
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl << endl
         << "Received $" << payment_amount / 100.0 << " for a purchase of $" << purchase_amount / 100.0 << endl << endl
         << " Amount of Change " << endl
         << "Coins       Amount" << endl
         << "__________________" << endl
         << "Dollars     " << setw(4) << number_of_dollar_bills << endl
         << "Half_Dollars" << setw(4) << number_of_half_dollars << endl
         << "Quarters    " << setw(4) << number_of_quarters << endl
         << "Dimes       " << setw(4) << number_of_dimes << endl
         << "Nickels     " << setw(4) << number_of_nickels << endl
         << "Pennies     " << setw(4) << change << endl;


    cout << endl << endl
         << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "--/--/--" << endl << endl
         << "Program results have been written to amount_of_change_6.txt" << endl;

    system ("PAUSE > NUL");

    return 0;
}
