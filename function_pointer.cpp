#include<iostream>
using namespace std;


// instead of storing address of a variable, a function pointer stores the address of a function
int getNumber()
{
    return 5;
}


int main()
{
    cout<<getNumber()<<endl;
    cout<<getNumber<<endl;      // we get an address
    /*
    This is the address of our function. ie name of the function will give you the address.*/
    
    return 0;
}