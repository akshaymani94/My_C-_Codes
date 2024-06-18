#include<iostream>
using namespace std;

int count = 0;

class num
{
    public:
    num()
    {
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;

    }

    ~num()
    {
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;

        cout<<"CREATING TWO MORE OBJECTS"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
// the meaning of block is that, whatever is formed inside the block will be destroyed immediately when we come out of the block
    cout<<"BACK TO MAIN"<<endl;
     
    return 0;
}