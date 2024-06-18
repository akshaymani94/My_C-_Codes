#include<iostream>

int main()
{
    using namespace std;

    int a = 3;
    int* b;
    b = &a;

    cout<<"THe address of a is "<<&a<<endl;
    cout<<"THe address of a is "<<b<<endl;

    cout<<"The value at address b is "<<*b<<endl;

    //pointer to pointer

    int** c = &b;
    cout<<"THe address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"THe value at address c is "<<*c<<endl;
    cout<<"The value at address value at(value at (c))is "<<**c<<endl;



}