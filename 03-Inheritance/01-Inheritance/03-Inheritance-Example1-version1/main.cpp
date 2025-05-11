#include <iostream>
#include "BasePlusCommissionEmployee.h" // BasePlusCommissionEmployee class definition
using namespace std;

int main()
{
    // instantiate a BasePlusCommissionEmployee object
    BasePlusCommissionEmployee employee{"Sue", "Jones", "222-22-2222", 10000, .06, 300};

    cout << "\nEmployee information from function toString: \n\n";
    employee.toString(); // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

    employee.setBaseSalary(1000); // set gross sales

    cout << "\nUpdated employee information from function toString: \n\n";
    employee.toString(); // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

    return 0;
}