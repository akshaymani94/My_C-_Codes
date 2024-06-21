#include<iostream>
using namespace std;


template <class T>
class Harry
{
    public:
    T data;
    Harry(T a)
    {
        data = a;
    }

    void display();

};
    template <class T>
    void Harry<T> :: display()
    {
        cout<<data<<endl;
    }


    void func(int a)
    {
        cout<<"I am first func() "<<a<<endl;

    }

    template <class T>
    void func(T a)
    {
        cout<<"I am TEMPLATISED func() "<<a<<endl;

    }

    template <class T>
    void func1(T a)
    {
        cout<<"I am TEMPLATISED func1() "<<a<<endl;

    }



int main()
{
    // // Harry <float> h(2.3);
    // // Harry <char> h('a');
    // Harry <int> h(3);


    // cout<<h.data<<endl;
    // h.display();

    func(4);        // which function of the two will be selected.
                    // highest priority will be for the exact match.

    return 0;
}