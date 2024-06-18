#include<iostream>
using namespace std;

class Base1
{
    public:
    void greet()
    {
        cout<<"How are you?"<<endl;
    }


};

class Base2
{
    public:
    void greet()
    {
        cout<<"Kaise ho?"<<endl;
    }


};

class Derived : public Base1, public Base2
{
    int a;
    public:
    // To resove ambiguity do the below
    void greet()
    {
        Base1::greet();    // Telling in case of ambiguity tell explicitly which to use
    }

};

int main()
{
    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    Derived d;
    d.greet();          // Ambiguity

    
    return 0;
}