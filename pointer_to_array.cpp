#include<iostream>
using namespace std;

int main()
{
    int luckyNumber[5] = {2,3,5,7,9};
    cout<<luckyNumber<<endl;   // name of the array is actually the address of the first element of this array
    cout<<&luckyNumber[0]<<endl;

    /* This means the name luckyNumber behaves as a pointer and the square brackets are behaving as an operator for dereferencing */
    cout<<luckyNumber[2]<<endl;
    cout<<*(luckyNumber+2)<<endl;
    // these two lines of codes are doing the same thing

    return 0;
}