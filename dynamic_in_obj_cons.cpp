#include<iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}   // when objects bd1,bd2,bd3 are formed we need to call a constructor.
    /* If this empty copnstructor is not there , then the programme will not understand 
    which constuctor to call. Therefore complier needs a constructor like this if 
    we are creating objects which initialize with values entered by the user*/
    
    BankDeposit(int p, int y, float r); // r can value like 0.02
    BankDeposit(int p, int y, int r); // r can value like 14
    
    void show();


};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;

    returnValue = principle;

    for (int i = 0; i<y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }


}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float (r)/100;

    returnValue = principle;

    for (int i = 0; i<y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }


}


void BankDeposit :: show()
{
    cout<<endl<<"Principle amount was : "<<principle<<endl;
    cout<<"Return value after "<<years<<" is "<<returnValue<<endl<<endl;
}

int main()
{
    BankDeposit bd1,bd2,bd3;

    int p ,y;
    float r;
    int R;

    // bd3.show();

    cout<<"Enter the value of p y abnd r"<<endl;
    cin>>p>>y>>r;

    bd1 = BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p y abnd R"<<endl;
    cin>>p>>y>>R;

    bd2 = BankDeposit(p,y,R);
    bd2.show();



    return 0;
}