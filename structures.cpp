#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    ep harry;
    struct employee akshay;
    struct employee lara;

    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120;

    akshay.eId = 2;
    akshay.favChar = 'd';
    akshay.salary = 300;

    lara.eId = 3;
    lara.favChar = 'a';
    lara.salary = 100;

    cout<<" The employee id is "<<harry.eId<<endl;
    cout<<" The favChar is "<<akshay.favChar<<endl;
    cout<<" The salary is "<<lara.salary<<endl;


    
    return 0;
}