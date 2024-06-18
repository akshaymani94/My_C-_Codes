#include<iostream>
using namespace std;


// base class
class Employee
{

    public:
    int id;
    float salary;


        Employee(int inpId)
        {
            id = inpId;
            salary = 34.0;


        }

        Employee(){}   // because automatically class programmer will call the base class constructor
    // when you create a derived class automatically the constructor of base class is called
    
};


//derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc
}
Notes:
default visibility modeis private 

*/

//creating a programmer class derived from employee base class

class Programmer : Employee
// class Programmer : public Employee
{
    public:
    int languageCode;
    Programmer (int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skillF(3);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    // cout<<skillF.id;     
    /*
    Will not work because by default programmer has inherited data from 
    from employee as private. Therefore id cannot be accessed by the object of the class
    But if we specify visibility mode as public then we be able to access
    class Programmer : public Employee
    */

     
    return 0;
}