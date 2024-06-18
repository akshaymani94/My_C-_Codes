#include<iostream>
using namespace std;

class c2;

class c1
{
    friend void exchange(c1 &,c2 &);
    int val1;
    public:
        int indata(int a)
        {
            val1 = a;
        }

        void display(void)
        {
            cout<<val1<<endl;
        }
};

class c2
{
    friend void exchange(c1 &, c2 &);
    int val2;
    public:
        int indata(int a)
        {
            val2 = a;
        }
 
        void display(void)
        {
            cout<<val2<<endl;
        }
};

// Here it is calling reference therefore whatever is going inside will change
// if there was no ambersand, the values will not swap. Therefore what is going to the function is reference

void exchange (c1 & x, c2  & y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}

// want to swap the private values of class c1 and c2.
// we use call by reference for this
 
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(35);
    oc2.indata(46); 
    cout<<"The value of c1 before exchanging : "<<endl;
    oc1.display();
    cout<<"The value of c2 before exchanging : "<<endl;
    oc2.display();


    exchange(oc1,oc2);

    cout<<"The value of c1 after exchanging becomes: "<<endl;
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: "<<endl;
    oc2.display();

    return 0;

 }