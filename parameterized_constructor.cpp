#include<iostream>
using namespace std;

class Complex
{
    int a ,b;

    public:
    // creating a constructor
    Complex(int, int); //constructor declaration

    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }  




};

Complex :: Complex(int x, int y)  // parameterized constrcutor as it takes two parameters
{
    a = x;
    b = y;

} 


int main()
{
    // implicit call
    Complex c(4,6);

    // explicit call
    Complex d = Complex(5,7);


    c.printNumber();
    d.printNumber();



    return 0;
}