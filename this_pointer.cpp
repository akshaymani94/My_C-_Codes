#include<iostream>
using namespace std;

class A
{
    int a;              // class variable
    public:
    void setData(int a)           // priority is given for local variables
    {
        this->a = a;    // this is a keyword which points to an object which is being created
    }        
               //this is a pointer which points on to that object which called the member functions

    // A&  setData(int a)0
    // {
    //     this->a = a;
    //     return *this;
    // }

    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};


int main()
{
    A a;        // local variable
    // a.setData(4).getData();
    a.setData(5);
    a.getData();
    return 0;
}