#include <iostream>
using namespace std;

class Employee 
{
public:
    static int count;
    string eName;

    void setName (string name)
    {
        eName = name;
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Employee::count=0;

int main()
{
    Employee Harry,Akshay,Kiran;
    Harry.setName("Harry");
    Akshay.setName("Akshay");
    Kiran.setName("Kiran");

    cout<<Employee::getCount()<<endl;
    return 0;
}
