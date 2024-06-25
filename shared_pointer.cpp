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
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    cout<<"Shared count : "<<shPtr1.use_count()<<endl;  // use_count will give the number of owners of the location make_shared<MyClass>()
    {
        shared_ptr<MyClass>shPtr2 = shPtr1;
        cout<<"Shared count : "<<shPtr1.use_count()<<endl;  // use_count will give the number of owners of the location make_shared<MyClass>()
            // count of the owners of this memeory location
    }
    
    cout<<"Shared count : "<<shPtr1.use_count()<<endl;  // use_count will give the number of owners of the location make_shared<MyClass>()

    // owner will get destroyed after the scope . Shared pointer is getting destroyed at the end of this scope.
    }
   
    

    return 0;
}