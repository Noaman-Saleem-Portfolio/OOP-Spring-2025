// BasePlusCommissionEmployee.cpp
// Class BasePlusCommissionEmployee member-function definitions.
#include <iomanip>
#include <iostream>
#include <cstdlib>                      // Needed for the exit function
#include "BasePlusCommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first,
                                                       const string &last, const string &ssn, double sales, double rate, double salary) : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary); // validate and store base salary
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary < 0.0)
    {
        cout << "Salary must be >= 0.0\n";
        exit(EXIT_FAILURE);
    }
    baseSalary = salary;
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
    // derived class cannot access the base class’s private data
    return baseSalary + CommissionEmployee::earnings();
}

// return string representation of BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::toString() const
{
    CommissionEmployee::toString();
    cout << "\nbase salary: " << baseSalary;
}