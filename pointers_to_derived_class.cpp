#include<iostream>
using namespace std;

class BaseClass
{
    public:
    int var_base;
    void display()
    {
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
    }


};

class DerivedClass : public BaseClass
{
    public:
    int var_derived;
    void display()
    {
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
        cout<<"Displaying base class variable var_derived "<<var_derived<<endl;

    }
};

int main()
{   
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;  // Base class Pointer pointing to derived class
    
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134;  // cannot be accessed .
    /*
    If you created a baseclass pointer and you pointed to derived class, then you will only be able 
    to access the properties and methods inherited from base class. 
    */

    base_class_pointer->display();    // this is called late binding runtime binding. // It will call the display function of the base class. Because the pointer is of the base class , although it is pointing towards derived class. 
    // we cannot access properties of derived class using base class pointer even if it is pointing towards derived class.
    DerivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98; 
    derived_class_pointer->var_base = 9448; 

    derived_class_pointer->display();



    return 0;
}