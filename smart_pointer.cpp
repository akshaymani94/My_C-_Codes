#include<iostream>
#include<memory>

using namespace std;

int main()
{
    unique_ptr<int>unPtr1=make_unique<int>(25);
    cout<<unPtr1.get()<<endl;   //unPtr1.get() returns the raw pointer managed by unique_ptr, which can then be printed to show the memory address.
    cout<<*unPtr1<<endl;

    // unique_ptr<int>unPtr2=unPtr1; // unique pointerc cannot be shared
    unique_ptr<int>unPtr2=move(unPtr1);  // please move ownership of unPtr1
    // now unPtr1 becomes empty, ie it becomes a null pointer
    cout<<*unPtr2<<endl;
    // cout<<*unPtr1<<endl;   // exception will be thrown

    return 0;
}