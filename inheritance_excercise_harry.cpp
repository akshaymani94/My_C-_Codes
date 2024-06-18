#include<iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes
1. Simple Calculator (+ - * / )
takes input of 2 number and performs + - * / and displays the results
2. Scientific Calculator (sin cos tan)
takes input of 2 number and performs any 4 scientific operations of your choice and dispalys the results

create another class Hybrid Calculator and inherit from these two classes 
question: 
1.what type of inheritance are you using
2.which mode of inheritance are you using
3. Create an object of Hybrid scalculator and display results of both simple and scientific calculator
4. HOw is code reusablity implemented
*/

class SimpleCalculator
{
    int a,b;
    public:
    void getDataSimple()
    {
        cout<<"Enter value of a"<<endl;
        cin>>a;
        cout<<"Enter value of b"<<endl;
        cin>>b;
    }

    void performOperationsSimple()
    {
        cout<<"The value of a+b is "<<a+b<<endl;
        cout<<"The value of a-b is "<<a-b<<endl;
        cout<<"The value of a*b is "<<a*b<<endl;
        cout<<"The value of a/b is "<<a/b<<endl;

    }
        
};



class ScientificCalculator
{
    int a,b;
    public:
    void getDataScientific()
    {
        cout<<"Enter value of a"<<endl;
        cin>>a;
        cout<<"Enter value of b"<<endl;
        cin>>b;
    }

    void performOperationsScientific()
    {
        cout<<"The value of cos(a) is "<<cos(a)<<endl;
        cout<<"The value of sin(a) is "<<sin(a)<<endl;
        cout<<"The value of exp(a) is "<<exp(a)<<endl;
        cout<<"The value of tan(a) is "<<tan(a)<<endl;

    }
        
};


class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
    


};

int main()
{
    // ScientificCalculator calc;
    // calc.getData();
    // calc.performOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();

    calc.getDataSimple();
    calc.performOperationsSimple();
    


    return 0;
}