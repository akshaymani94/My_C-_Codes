#include<iostream>
using namespace std;

void swap(int a, int b);

void swapByRef(int* a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
 
}

void swapCppRef(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;

}

// swapping by using a reference variable
int & swapRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 4, y = 5;
    cout<<"x "<<x<<"\ty "<<y<<endl;
    swap(x,y);
    cout<<"x "<<x<<"\ty "<<y<<endl;
    swapByRef(&x,&y);
    cout<<"x "<<x<<"\ty "<<y<<endl;

    x = 4;
    y = 5;
    swapCppRef(x,y);
    cout<<"x "<<x<<"\ty "<<y<<endl;

    x = 4;
    y = 5;
    swapRefVar(x,y) = 766;
    cout<<"x "<<x<<"\ty "<<y<<endl;



    return 0;

}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}    