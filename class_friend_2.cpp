#include<iostream>
using namespace std;

class Y;   // FORWARD DECLARATION
class X
{
    int data;
    public:

    friend void add(X,Y);
        void setValue(int value)
        {
            data = value;
        }
};

class Y
{
    int num;
    public:
    friend void add(X,Y);

        void setValue(int value)
        {
            num = value;
        }
};


// add wants to access private data of both X and Y
void add (X o1, Y o2)
{
    cout<<"Adding datas of X and Y objects gives me "<<o1.data+o2.num;
}



int main()
{

    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);

    add (a1,b1);

    
    return 0;
}