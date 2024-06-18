#include<iostream>
using namespace std;

class Employee
{
    public:
    int eID;
    string eName;


    void printName();
    // {
    //     cout<<eName<<endl;

    // }
};




int main()
{
    Employee Harry;
    Harry.eID = 5;
    Harry.eName = "Harry";
    //Harry.printName();
    
    // cout<<"Employee having ID "<<Harry.eID<<" is "<<Harry.eName<<endl;
    
    
    
    return 0;
}
    
    
    void Employee::printName()
    {
        cout<<eName<<endl;
    }
    