#include "balance.h"
#include <iostream>
#include <cassert> // for debugging function assert()
#include <cmath> // for mathematical functions, specifically pow()

namespace mad_2c
{
// CONSTRUCTOR
//   balance(double init_balance = 0, double init_interest_rate = 0);
//     Precondition: NONE
//     Postcondition: Sets the balance of a user's bank account to
//     the value provided in the formal arguments along with the
//     interest rate.
    balance::balance(double init_balance, double init_interest_rate)
    {
        account = init_balance;
        rate = init_interest_rate;
    }

// MODIFICATION FUNCTIONS
//   void deposit(double new_deposit);
//     Precondition: NONE
//     Postcondition: Add to the account's current amount the amount
//     specified by the argument passed to this function.
    void balance::deposit(double new_deposit)
    {
        //assert(new_deposit > 0); // Ensure the deposit is positive

        validateInput(new_deposit);

        account += new_deposit;
    }

//   double withdraw(double new_withdrawal);
//     Precondition: Current balance must be greater than the amount
//     specified to withdraw.
//     Postcondition: Returns the amount specified to withdraw from
//     the account.
    double balance::withdraw(double new_withdrawal)
    {
        //assert(new_withdrawal > 0);

        if (account - new_withdrawal < 0)
        {
            std::cout << "ERROR: Insufficient funds\n"
                      << "Current Balance: $"
                      << account << std::endl
                      << "Please make a deposit or make an "
                      << "appropriate withdrawal.\n";
        }

        account -= new_withdrawal;

        return account;
    }

//   void changeInterestRate(double new_rate);
//     Precondition: NONE
//     Postcondition: Sets the interest rate to the new rate specified
//     by the argument provided.
    void balance::changeInterestRate(double new_rate)
    {
        validateInput(new_rate);

        rate = new_rate;
    }

//   void addInterest(double time);
//     Precondition: NONE
//     Postcondition: Adds to the balance an amount based on the
//     interest rate the account is set to and the amount of time
//     specified to compound or grow the interest.
//     Future value = Principal x (1 + rate)^time
    void balance::addInterest(double time)
    {
        validateInput(time);

        account *= pow(1 + rate, time);
    }

// NON-MEMBER FUNCTIONS
//   bool operator==(const balance& b1, const balance& b2);
//     Precondition: NONE
//     Postcondition: Returns true if the balance amount and
//     interest rates are equal for the balances b1 and b2.
    bool operator==(const balance& b1, const balance& b2)
    {
        return (b1.getBalance() == b2.getBalance() &&
                b1.getRate() == b2.getRate());
    }

//   void validateInput(auto& value);
//     Precondition: NONE
//     Postcondition: Prevents user from entering invalid data
//     (used specifically for preventing entering negative amounts
//      as deposits and keeping
    void validateInput(auto& value)
    {
        while (value < 0)
        {
            std::cout << "Please enter a non-negative amount: ";
            std::cin >> value;
        }
    }
}