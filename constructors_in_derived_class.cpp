#include<iostream>
using namespace std;
/*
case 1: 
class B: public A
{

}
Order of execution of constructor
A--->B  (becoz A is base class)

case 2:
class A : public B, public C
{

}
Order of execution of constructor
B--->C--->A (becoz we have two base classes B and C.But as B is written before C, so constrcutor of B will be executed first)

case 3:
class A: public B, virtual public C
{

}
Order of execution of constructor
C--->B--->A  (becoz C is virtual base class)


*/

class Base1
{
    int data1;
    public:
        Base1(int i)
        {
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }

        void printDataBase1(void)
        {
            cout<<"The value of data1 is "<<data1<<endl;
        }

};

class Base2
{
    int data2;
    public:
        Base2(int i)
        {
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }

        void printDataBase2(void)
        {
            cout<<"The value of data2 is "<<data2<<endl;
        }

};

class Derived : public Base1, public Base2   // By changing this order of constructor being called will change
// class Derived : public Base2, public Base1   // By changing this order of constructor being called will change

{
    int derived1,derived2;

    public:
        // Derived(int a, int b, int c, int d) : Base2(a) , Base1(b)
        Derived(int a, int b, int c, int d) : Base1(a) , Base2(b)
        // BY changing this, the order of constructor being called will not change.
        {
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called"<<endl;

        }

        void printDataDerived(void)
        {
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;

        }
};






int main()
{

    Derived harry(1,2,3,4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();

    
    return 0;
}