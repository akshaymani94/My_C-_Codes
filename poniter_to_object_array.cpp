#include<iostream>
using namespace std;

class Complex
{
    int real,imaginary;
    public:
        void getData()
        {
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
            
        }
        
        void setData(int a, int b)
        {
            real = a;
            imaginary = b;
        }
};

int main()
{   
    Complex *ptr = new Complex[4];     // we made array of 4 objects using pointer
    ptr->setData(1,4);       // we will access these by incrementing the pointer
    ptr->getData();

    (ptr+1)->setData(2,6);       // using an arrow operator to dereference a pointer
    (ptr+1)->getData();

    (ptr+2)->setData(3,8);       // using an arrow operator to dereference a pointer
    (ptr+2)->getData();

    (ptr+3)->setData(4,12);       // using an arrow operator to dereference a pointer
    (ptr+3)->getData();

    return 0;
}