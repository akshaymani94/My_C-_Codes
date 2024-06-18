#include<iostream>
using namespace std;

class Base
{
    protected:
    int a;
    private:
    int b;

};

class Derived : protected Base
{


};


int main()
{
    Base b;
    Derived d;
   // cout<<b.a;  // cannot. but can be inherited
    // cout<<d.a;  // cannot . because a is inherited as protected.
    // cannot access even if it was derived publically
    return 0;
}