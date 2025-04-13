#include <iostream>
using namespace std;

// Budget class declaration
class Budget
{
private:
    static double corpBudget; // Static member
    double divisionBudget;    // Instance member
public:
    Budget()
    {
        divisionBudget = 0;
    }

    void addBudget(double b)
    {
        divisionBudget += b;
        corpBudget += b;
    }

    double getDivisionBudget() const
    {
        return divisionBudget;
    }

    double getCorpBudget() const
    {
        return corpBudget;
    }

    static void mainOffice(double); // Static member function
};

// Definition of static member variable corpBudget
double Budget::corpBudget = 0;

//**********************************************************
// Definition of static member function mainOffice. *
// This function adds the main office's budget request to *
// the corpBudget variable. *
//**********************************************************
void Budget::mainOffice(double moffice)
{
    corpBudget += moffice;
}

int main()
{
    int count;                   // Loop counter
    double mainOfficeRequest;    // Main office budget request
    const int NUM_DIVISIONS = 4; // Number of divisions

    // Get the main office's budget request.
    // Note that no instances of the Budget class have been defined.
    cout << "Enter the main office's budget request: ";
    cin >> mainOfficeRequest;
    Budget::mainOffice(mainOfficeRequest);

    Budget divisions[NUM_DIVISIONS]; // Array of Budget objects

    // Get the budget requests for each division.
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        double budgetAmount;
        cout << "Enter the budget request for division ";
        cout << (count + 1) << ": ";
        cin >> budgetAmount;
        divisions[count].addBudget(budgetAmount);
    }

    // Display the budget requests and the corporate budget.
    cout << "\nHere are the division budget requests:\n";
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        cout << "\tDivision " << (count + 1) << "\t$ ";
        cout << divisions[count].getDivisionBudget() << endl;
    }
    cout << "\tTotal Budget Requests:\t$ ";
    cout << divisions[0].getCorpBudget() << endl;

    return 0;
}