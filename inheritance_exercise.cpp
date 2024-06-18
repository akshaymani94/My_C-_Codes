#include<iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes
1. Simple Calculator (+ - * / )
takes input of 2 number and performs + - * / and displays the results
2. Scientific Calculator (sin cos tan)
takes input of 2 number and performs any 4 scientific operations of your choice and dispalys the results

create another class Hybrid Calculator and inherit from these two classes 
question: 
1.what type of inheritance are you using
2.which mode of inheritance are you using
3. Create an object of Hybrid scalculator and display results of both simple and scientific calculator
4. HOw is code reusablity implemented
*/

class SimpleCalculator
{
    int a,b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }

        int getData1()
        {
            return a;
        }

        int getData2()
        {
            return b;
        }



        int add(int p,int q)
        {
            return (p+q);
        }

        int subtract(int p,int q)
        {
            return (p-q);
        }

        int multiply(int p,int q)
        {
            return (p*q);
        }

        int divide(int p,int q);
        
};

int SimpleCalculator::divide(int p,int q)
{
      return (p/q);
}

class ScientificCalculator
{
        public:
        
        float sineof(int p)
        {
            return sin(p);
        }

        float cosof(int p)
        {
            return cos(p);
        }

        float tanof(int p)
        {
            return tan(p);
        }
    
        float expof(int p);
};

float ScientificCalculator::expof(int p)
{
    return exp(p);
}

class HybridCalculator : public virtual SimpleCalculator, public ScientificCalculator
{
    


};

int main()
{
    int x,y;
    HybridCalculator hb;
    hb.setData(10,5);
    x = hb.getData1();
    y = hb.getData2();
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<"Addition : "<<hb.add(x,y)<<endl;
    cout<<"Division : "<<hb.divide(x,y)<<endl;
    cout<<"Sine  : "<<hb.sineof(x)<<endl;
    cout<<"Exp :"<<hb.expof(x)<<endl;   


    return 0;
}