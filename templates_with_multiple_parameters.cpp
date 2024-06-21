#include<iostream>
using namespace std;
/*
    template <class T1, class T2>
    class nameOfClass
    {
    }

*/

template<class T1,class T2>         //template with multiple parameters
class myClass
{
    public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }


    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};

int main()
{     
    myClass <int,char> obj(1,'c');    // not necessary that it be int float char, it can be a class also
    obj.display(); 
    
    return 0;
}