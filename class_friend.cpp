#include<iostream>
using namespace std;

class Complex;

class Calculator
{
    public:
    

    int sumRealComplex(Complex,Complex);
    int sumCompComplex(Complex,Complex);

};

class Complex
{
    int a,b;

    friend class Calculator;

    //friend int Calculator::sumRealComplex (Complex, Complex);
    //friend int Calculator::sumCompComplex (Complex, Complex);

    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber()
        {
            cout<<"Your number is "<< a <<" + "<<b<< "i"<<endl;

        }


        void sum(Complex o1, Complex o2)
        {
            int x = o1.a+o2.a;
            int y = o1.b+o2.b;
            cout<<"Sum is "<<x<<" + "<<y<<"i"<<endl;
        }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a+o2.a);

}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    Complex o1,o2,o3;
    o1.setNumber(1,4);
    o1.printNumber();

    o2.setNumber(5,7);
    o2.printNumber();

    o3.sum(o1,o2);

    Calculator calc;
    
    int res = calc.sumRealComplex(o1,o2);
    int resc = calc.sumCompComplex(o1,o2);





    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    cout<<"The sum of complex part of o1 and o2 is "<<resc<<endl;
    return 0;



    return 0;
}