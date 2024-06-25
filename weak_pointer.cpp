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
    weak_ptr<int>wePtr1;
    {
        shared_ptr<int>shPtr1=make_shared<int>(25);
        wePtr1=shPtr1;
    }
}