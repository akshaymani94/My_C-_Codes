#include<iostream>
#include<memory>

using namespace std;

class MyClass
{
   public:
   MyClass()
   {
    cout<<"CONSTRUCTOR INVOKED"<<endl;
   } 
   ~MyClass()
   {
    cout<<"DESTRUCTOR INVOKED"<<endl;
   }
};

int main()
{
    {
    unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
    }
    // unique pointer will be destruyed at the end of its scope


    return 0;
}