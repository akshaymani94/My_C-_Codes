#include<iostream>
using namespace std;

// class Base1
// {
//     public:
//     void greet()
//     {
//         cout<<"How are you?"<<endl;
//     }


// };

// class Base2
// {
//     public:
//     void greet()
//     {
//         cout<<"Kaise ho?"<<endl;
//     }


// };

// class Derived : public Base1, public Base2
// {
//     int a;
//     public:
//     // To resove ambiguity do the below
//     void greet()
//     {
//         Base1::greet();    // Telling in case of ambiguity tell explicitly which to use
//     }

// };

class B
{
    public:
    void say()
    {
        cout<<"Hello world"<<endl;
    }
};

class D : public B 
{
    int a;
    public:
    void say()
    {
        cout<<"Hello my beautiful people"<<endl;
    }
// If this public function was not there then d.say() would run say() of B class.
// D's say method will override base class B's say method
};


int main()
{
    B b;
    b.say();

    D d;
    d.say();


    
    return 0;
}