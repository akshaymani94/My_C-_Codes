#include<iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a+b)/2.0;      // becoz both a and b are int result will also be in int. Therefore changed 2 to float.
//     return avg;
// }


// float funcAverage2(int a, float b)
// {
//     float avg = (a+b)/2.0;      
//     return avg;
// }

// Instead of defining this many functions I will define a template function

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a+b)/2.0;      
    return avg;
}



template <class T>
void swapp(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main()
{
    float a;
    // a = funcAverage(5,2);
    // a = funcAverage2(5,2.2);

    // Using template we can do this by declaring just one function
    a = funcAverage(5,2.4);

    cout<<"The average of these numbers is "<<a<<endl;
    printf("The average of these numbers is %f \n", a);
    printf("The average of these numbers is %0.3f \n", a);


    int x=5,y=7;
    swapp(x,y);     // swap is already there in standard namespace
    cout<<x<<endl<<y<<endl;

    
    return 0;
}