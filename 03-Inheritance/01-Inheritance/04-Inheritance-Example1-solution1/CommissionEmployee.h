// CommissionEmployee class definition represents a commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H

using namespace std;

#include <string> // C++ standard string class

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &, double, double);

    void setFirstName(const string &);            // set first name
    string getFirstName() const;                  // return first name
    void setLastName(const string &);             // set last name
    string getLastName() const;                   // return last name
    void setSocialSecurityNumber(const string &); // set SSN
    string getSocialSecurityNumber() const;       // return SSN
    void setGrossSales(double);                   // set gross sales amount
    double getGrossSales() const;                 // return gross sales amount
    void setCommissionRate(double);               // set commission rate (percentage)
    double getCommissionRate() const;             // return commission rate
    double earnings() const;                      // calculate earnings
    void toString() const;                        // create string representation
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;     // gross weekly sales
    double commissionRate; // commission percentage
};
#endif