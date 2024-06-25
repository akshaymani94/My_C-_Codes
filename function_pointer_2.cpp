#include<iostream>
using namespace std;


// instead of storing address of a variable, a function pointer stores the address of a function
int getNumber()
{
    return 5;
}


int main()
{
    int(*funcPtr)()=getNumber;
    cout<<funcPtr();        //invoking the function. INstead of using nam of function , we are using the name of the function pointer.
    
    return 0;
}