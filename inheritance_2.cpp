#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : private Base // class is derived privately.So all public items of base class will become private for inherited class.
// class Derived : public Base //class is derived publically.So all public items of base class will become public for inherited class.
/*If we had derived the base class privately, the data2, getData1 and getData2
will become private for derived class and so we wont be able to call it from outside.
We can only call it from inside the class. We can call set data inside process*/
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData(); // only change here
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setData();
    der.process();
    der.display();

    return 0;
}