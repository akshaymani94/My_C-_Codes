#include<iostream>
using namespace std;

int main()
{
    int marks[] ={23,45,56,89};
    int i;

    for (i=0;i<4;++i)
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    
    // pointer and array

    int* p = marks;
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;

    // look into this code carefully



    
   
    return  0;



    


}