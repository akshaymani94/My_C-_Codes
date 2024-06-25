#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of the array :"<<endl;
    cin>>size;
    
    /*
    int myArray[size];

    for (int i = 0;i<size;i++)
    {
        cout<<"enter element ";
        cin >> myArray[i];
    }

    cout<<"The array is : "<<endl;
    for (int i = 0;i<size;i++)
    {
        cout<<myArray[i]<<" ";

    }

    */

    int* myArray = new int[size];   // new is a command which will alloacate memmory when we need it
    for (int i = 0;i<size;i++)      // Each time you allocate memory when you need it, you shoul deallocate it when you dont need it
    {
        cout<<"Array["<<i<<"] ";
        cin >> myArray[i];
    }
    for (int i = 0;i<size;i++)
    {
        cout<<*(myArray+i)<<" ";

    }

    delete[]myArray;
    myArray = NULL;


    return 0;
}