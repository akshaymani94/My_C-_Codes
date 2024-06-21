#include<iostream>
using namespace std;

// Exception handling is built on three keywords try, catch and throw
double division (int a, int b)
{
    if(b==0)
    {
    throw " Division by zero condition ! ";
    }
    return(a/b);
}


int main()
{
    int x,y;
    double z;
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;

    try
    {
        z = division(x,y);
        cout<<endl<<z<<endl;
    }
    catch (const char* msg)
    {
        cerr<<msg<<endl;
    }    
    return 0;
}