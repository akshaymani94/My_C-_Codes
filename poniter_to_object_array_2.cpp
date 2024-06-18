#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

    public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};


int main()
{   
    int size = 3;
    // int* ptr = &size;
    
    // int *ptr = new int [34];    // will create memmory block to store 34 interger data and will point at the first memory location. We can use pointer ++ or pointer +1 to access the next location
    /*  1.general stores item
        2.veggies item
        3.hardware item
*/
    ShopItem* ptr = new ShopItem [size];    // similarly here
    ShopItem* ptrTemp = ptr;
    int p,i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr)setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }

    ptr=ptrTemp;
    
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptr->getData();
        ptr++;
    }
    
    
    return 0;
}