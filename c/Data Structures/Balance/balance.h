#ifndef BALANCE_H // if this file has yet to be compiled
#define BALANCE_H // then compile it

// FILE: balance.h
// CLASS PROVIDED
//   class representing a balance in a bank account that can be
//   modified by means of deposits, withdrawals and accrual of
//   interest based on the interest rate at which the principal or
//   current balance is set to.
//
// CONSTRUCTOR
//   balance(double init_balance = 0, double init_interest_rate = 0);
//     Precondition: NONE
//     Postcondition: Sets the balance of a user's bank account to
//     the value provided in the formal arguments along with the
//     interest rate.
//
// MODIFICATION FUNCTIONS
//   void deposit(double new_deposit);
//     Precondition: NONE
//     Postcondition: Add to the account's current amount the amount
//     specified by the argument passed to this function.
//   double withdraw(double new_withdrawal);
//     Precondition: Current balance must be greater than the amount
//     specified to withdraw.
//     Postcondition: Returns the amount specified to withdraw from
//     the account.
//   void changeInterestRate(double new_rate);
//     Precondition: NONE
//     Postcondition: Sets the interest rate to the new rate specified
//     by the argument provided.
//   void addInterest(double time);
//     Precondition: NONE
//     Postcondition: Adds to the balance an amount based on the
//     interest rate the account is set to and the amount of time
//     specified to compound or grow the interest.
//
// ACCESSOR FUNCTIONS
//   double getBalance() const;
//     Precondition: NONE
//     Postcondition: Returns the current amount in the balance.
//   double getRate() const;
//     Precondition: NONE
//     Postcondition: Returns the interest rate the account is
//     set to.
//
// NON-MEMBER FUNCTIONS
//   bool operator==(const balance& b1, const balance& b2);
//     Precondition: NONE
//     Postcondition: Returns true if the balance amount and
//     interest rates are equal for the balances b1 and b2.
//   void validateInput(auto& value);
//     Precondition: NONE
//     Postcondition: Prevents user from entering invalid data
//     (used specifically for preventing entering negative amounts
//      as deposits and keeping

namespace mad_2c
{
    class balance
    {
    public:
        // Constructor
        balance(double init_balance = 0, double init_interest_rate = 0);

        // Modifier functions
        void   deposit(double);
        double withdraw(double);
        void   changeInterestRate(double);
        void   addInterest(double);

        // Accessors
        double getBalance() const {return account;}
        double getRate() const {return rate;}

    private:
        double account, rate;
    };

    bool operator==(const balance&, const balance&);
    void validateInput(auto&);
}
#endif // BALANCE_H