#include<iostream>
using namespace std;
// Even if our pointer is base class's pointer and pointing to derived class
//But we still want that our derived class function should run. What do we do.
//If we make our function virtual we can do this. This means we want to do runtime polymorphism.

class BaseClass
{
    public:
    int var_base = 1;;
    virtual void display()    // if my pointer is pointing to derived class, then when the function which has same name in base and derived is called , then dont run my function run the function of derived class instead
    {
        cout<<"1.Displaying base class variable var_base "<<var_base<<endl;
    }


};

class DerivedClass : public BaseClass
{
    public:
    int var_derived = 2;
    void display()             // this will run base class function only. But to change this behaviour we use derived class
    {
        cout<<"2.Displaying base class variable var_base "<<var_base<<endl;
        cout<<"2.Displaying base class variable var_derived "<<var_derived<<endl;

    }
};



int main()
{
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();


    return 0;
}