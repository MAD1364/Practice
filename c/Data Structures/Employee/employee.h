#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// FILE: employee.h
// CLASS PROVIDED
//   class that represents an employee and pertaining information
//   including the employee's name, id and salary.
//
// CONSTRUCTOR
//   employee(string name = "", int id = 0, double salary = 0.0);
//     Precondition: salary must be non-negative
//     values.
//     Postcondition: Sets the member variables of the employee
//     object representing an instantiating of the pertaining class
//      to the values either specified by the default values of the
//      formal parameters or those provided as arguments by the
//      client.
//
// MODIFICATION FUNCTIONS
//   void increaseSalary(double rate);
//     Precondition: NONE
//     Postcondition: Increases the salary of the employee by a
//     percentage specified by the argument. The salary is based on
//     and hourly wage.
//
// ACCESSOR FUNCTIONS
//   string toString() const;
//     Precondition: NONE
//     Postcondition: Returns a string that has the following format
//     representing the employee and their information:
//       EmployeeName\n
//       EmployeeID\n
//       Salary\n
//       BiweeklyPay.
//   string getName() const;
//     Precondition: NONE
//     Postcondition: Returns the name of the employee.
//   int getID() const;
//     Precondition: NONE
//     Postcondition: Returns the ID of the employee.
//   double getSalary() const;
//     Precondition: NONE
//     Postcondition: Returns the salary of the employee
//   double getBiWeeklyPay() const;
//     Precondition: NONE
//     Postcondition: Returns the amount of the employee's biweekly
//     salary.
//   double calculateYearlySalary() const;
//     Precondition: NONE (non-negative values are precluded by the
//                         precondition of the constructor).
//     Postcondition: Returns the yearly salary of the employee
//     based on their hourly wage or salary.
//   double calculatePay(double hours) const;
//      Precondition: hours must be a non-negative value.
//      Postcondition: Returns the amount of the employee's pay
//      for the pay period for which the amount of hours in the
//      period were worked.
//
// NON-MEMBER FUNCTIONS
//   friend bool operator==(const employee& e1, const employee& e2);
//     Precondition: NONE
//     Postcondition: Returns true if e1 and e2 have the same name,
//     id, salary and biweekly pay. Access to the private member
//     variables of the objects implicated in the comparison is based
//     on the friend mechanism.
//   void validateInput(auto& value);
//     Precondition: NONE
//     Postcondition: Ensures the argument provided to the function
//     is valid in the context of the calling function.
#include <string>

namespace mad_2c
{
    class employee
    {
    public:
        // Constructor
        employee(std::string i_name = "", int i_id = 0, double i_salary = 0.0);
        // Modifiers
        void increaseSalary(double);
        //Accessors
        void        toString() const;
        std::string getName() const {return name;}
        int         getID() const {return id;}
        double      getSalary() const {return salary;}
        double      getBiWeeklyPay() const {return biweekly_pay;}
        double      calculateYearlySalary() const;
        double      calculatePay(double) const;
        friend bool operator==(const employee&, const employee&);

    private:
        std::string name;
        int id;
        double salary, biweekly_pay;
    };

    void validateInput(auto&);
}
#endif // EMPLOYEE_H