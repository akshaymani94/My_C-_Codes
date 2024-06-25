#include<iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"Rows,cols:";
    cin>>rows>>cols;

    int** table = new int*[rows];     // table is storing pointer to a pointer

    for (int i = 0; i < rows; i++)
    {
        table[i]=new int [cols];
    }

    table[1][2] = 88;
    
    // dealocating memory

   for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    delete[] table;
    table = NULL;

    return 0;
}