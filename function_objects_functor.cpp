#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    // Function objects are functions wrapped in 
    //a class so that it is available like an object

    int arr[] = {1,73,4,2,54,1};
    sort(arr,arr+5);    // sorts the first 5 elements
   
    for(int i = 0; i < 6; i++)
    {
     cout<<arr[i]<<endl;
    }
    cout<<endl<<endl;

    
    sort(arr,arr+6, greater<int>());  
    for(int i = 0; i < 6; i++)
    {
     cout<<arr[i]<<endl;
    }
   


    return 0;
}
