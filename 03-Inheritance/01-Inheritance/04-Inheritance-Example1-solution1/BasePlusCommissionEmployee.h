// BasePlusCommissionEmployee class definition represents a employee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

using namespace std;

#include <string>               // C++ standard string class
#include "CommissionEmployee.h" // CommissionEmployee class declaration

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &, const string &, const string &, double, double, double);

    void setBaseSalary(double);   // set base salary
    double getBaseSalary() const; // return base salary

    double earnings() const; // calculate earnings
    void toString() const;   // create string representation

private:
    double baseSalary; // base salary
};
#endif