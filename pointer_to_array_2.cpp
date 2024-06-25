#include<iostream>
using namespace std;

int main()
{
    int luckyNumber[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Number "<<i+1<<" : ";
        cin>>luckyNumber[i];
    }

    for(int i=0; i<5; i++)
    {
        cout<<*(luckyNumber+i)<<" ";
    }


    return 0;
}