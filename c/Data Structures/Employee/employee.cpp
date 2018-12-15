#include "employee.h"
#include <string>
#include <cstdlib> // for type conversion functions such as itoa()
#include <iostream> // to recognize the pertaining objects in std

namespace mad_2c
{
// CONSTRUCTOR
//   employee(string name = "", int id = 0, double salary = 0.0);
//     Precondition: salary must be non-negative
//     values.
//     Postcondition: Sets the member variables of the employee
//     object representing an instantiating of the pertaining class
//      to the values either specified by the default values of the
//      formal parameters or those provided as arguments by the
//      client.
    employee::employee(std::string i_name, int i_id, double i_salary)
    {
        name = i_name;
        id = i_id;
        salary = i_salary;

        validateInput(salary);

        biweekly_pay = salary * 80;
    }

// MODIFICATION FUNCTIONS
//   void increaseSalary(double rate);
//     Precondition: NONE
//     Postcondition: Increases the salary of the employee by a
//     percentage specified by the argument. The salary is based on
//     and hourly wage.
    void employee::increaseSalary(double rate)
    {
        validateInput(rate);

        // Increase salary by the amount specified by the percentage
        // the rate represents
        salary += (salary*rate);

        biweekly_pay = salary * 80;
    }

// ACCESSOR FUNCTIONS
//   string toString() const;
//     Precondition: NONE
//     Postcondition: Returns (displays) a string that has the
//     following format representing the employee and their
//     information:
//       EmployeeName\n
//       EmployeeID\n
//       Salary\n
//       BiweeklyPay.
    void employee::toString() const
    {
        std::cout << "Name: " << name << std::endl
                  << "ID: " << id << std::endl
                  << "Salary: " << salary << std::endl
                  << "Biweekly Pay: " << biweekly_pay << std::endl;
    }

//   double calculateYearlySalary() const;
//     Precondition: NONE (non-negative values are precluded by the
//                         precondition of the constructor).
//     Postcondition: Returns the yearly salary of the employee
//     based on their hourly wage or salary.
    double employee::calculateYearlySalary() const
    {
        return (salary * 52 * 40);
    }

//   double calculatePay(double hours) const;
//      Precondition: hours must be a non-negative value.
//      Postcondition: Returns the amount of the employee's pay
//      for the pay period for which the amount of hours in the
//      period were worked.
    double employee::calculatePay(double hours) const
    {
        validateInput(hours);

        if (hours <= 40) return hours * salary;
        else return (40 * salary + (hours-40) * salary * 1.5);
    }

// NON-MEMBER FUNCTIONS
//   friend bool operator==(const employee& e1, const employee& e2);
//     Precondition: NONE
//     Postcondition: Returns true if e1 and e2 have the same name,
//     id, salary and biweekly pay. Access to the private member
//     variables of the objects implicated in the comparison is based
//     on the friend mechanism.
    bool operator==(const employee& e1, const employee& e2)
    {
        return (e1.name == e2.name && e1.id == e2.id &&
                e1.salary == e2.salary);
    }

//   void validateInput(auto& value);
//     Precondition: NONE
//     Postcondition: Ensures the argument provided to the function
//     is valid in the context of the calling function.
    void validateInput(auto& value)
    {
        while (value < 0)
        {
            std::cout << "Please enter a non-negative value: ";
            std::cin >> value;
        }
    }
}