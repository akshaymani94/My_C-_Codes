#include<iostream>
using namespace std;


// instead of storing address of a variable, a function pointer stores the address of a function
int add(int a, int b)
{
    return a+b;
}


int main()
{
    int(*funcPtr)(int,int)=add;
    cout<<add(2,3)<<endl;        
    cout<<funcPtr(3,4)<<endl;//invoking the function. INstead of using nam of function , we are using the name of the function pointer.
    
    return 0;
}