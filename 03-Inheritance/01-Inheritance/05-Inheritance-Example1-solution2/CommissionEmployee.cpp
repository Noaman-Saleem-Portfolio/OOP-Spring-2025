// Fig. 11.5: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iomanip>
#include <iostream>
#include <cstdlib>              // Needed for the exit function
#include "CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(const string &first,
                                       const string &last, const string &ssn, double sales, double rate)
{
    firstName = first;          // should validate
    lastName = last;            // should validate
    socialSecurityNumber = ssn; // should validate
    setGrossSales(sales);       // validate and store gross sales
    setCommissionRate(rate);    // validate and store commission rate
}

// set first name
void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first; // should validate
}
// return first name
string CommissionEmployee::getFirstName() const
{
    return firstName;
}
// set last name
void CommissionEmployee::setLastName(const string &last)
{
    lastName = last; // should validate
}
// return last name
string CommissionEmployee::getLastName() const
{
    return lastName;
}
// set social security number
void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn; // should validate
}
// return social security number
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
// set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
    if (sales < 0.0)
    {
        cout << "Gross sales must be >= 0.0\n";
        exit(EXIT_FAILURE);
    }
    grossSales = sales;
}
// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
// set commission rate
void CommissionEmployee::setCommissionRate(double rate)
{
    if (rate <= 0.0 || rate >= 1.0)
    {
        cout << "Commission rate must be > 0.0 and < 1.0\n";
        exit(EXIT_FAILURE);
    }
    commissionRate = rate;
}

// return commission rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

// calculate earnings
double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}
// return string representation of CommissionEmployee object
void CommissionEmployee::toString() const
{
    cout << fixed << setprecision(2); // two digits of precision
    cout << "commission employee: " << firstName << " " << lastName
         << "\nsocial security number: " << socialSecurityNumber
         << "\ngross sales: " << grossSales
         << "\ncommission rate: " << commissionRate;
}