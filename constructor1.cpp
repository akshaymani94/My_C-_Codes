#include<iostream>
using namespace std;

class Complex
{
    int a ,b;

    public:
    // creating a constructor
    Complex(void); //constructor declaration

    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }  




};

Complex :: Complex(void)  // default constrcutor as is does not take s no parameters
{
    a = 10;
    b = 7;

}


int main()
{

    Complex c;
    c.printNumber();


    return 0;
}