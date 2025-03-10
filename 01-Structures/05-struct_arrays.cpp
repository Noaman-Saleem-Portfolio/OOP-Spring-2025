// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Payinfo{
    int hours;
    double payRate;
};

int main() {
    const int NUMOFWORKERS = 3;
    Payinfo workers[NUMOFWORKERS];
    cout<<"Enter hours worked and pay rate by "<<NUMOFWORKERS<<" employees : \n";
    for(int i=0;i<NUMOFWORKERS;i++){
        cout<<"Hours worked by employee # "<<(i+1)<<" : ";
        cin>>workers[i].hours;
        cout<<"Pay Rate of employee # "<<(i+1)<<" : ";
        cin>>workers[i].payRate;
    }
    
    cout<<"Gross pay of each worker : \n";
    for(int i=0;i<NUMOFWORKERS;i++){
        double gross;
        gross=workers[i].hours * workers[i].payRate;
        cout<<"Gross pay of employee # "<<(i+1)<<" = "<<gross;
        cout<<endl;
    }
    
    

    return 0;
}