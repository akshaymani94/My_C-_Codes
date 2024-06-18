#include<iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){}  
        /*If we have made a construtor, the the constructor 
        has to run whatever it is. So we have made a constructor below. 
        So if we have an object without a matching consttrcutor
        , then it wont run. To prevent this, we create the empty
        constructor.*/
        Number(int num)
        {
            a=num;
        }


        // when no copy constuctor is found, compiler applies its own copy constructor
        Number(Number &obj)
        {
            cout<<"Copy constructor called"<<endl<<endl;
            a=obj.a;
        }

        void display()
        {
            cout<<"The number of this object is "<<a<<endl<<endl;
        }
};



int main()
{
    Number x,y,z(45),z2;
    z.display();
    // z1 should exactly resemble z or x or y
    Number z1(z);  // copy constructor invoked
    z1.display();

    z2=z;   // copy constructor will not be invoked. Because object was already made
    
    Number z3 = z;  // copy constructor invoked
    
    

    return 0;
}