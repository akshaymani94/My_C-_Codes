#include<iostream>
using namespace std;


// a pointer should be of the same data type as the value to whcih it is pointing
// void pointer can point to a variable of any data type
// void pointer cannot be derefence directly

// void printNumber(int* numberPtr)
// {
//     cout<<*numberPtr<<endl;
// }

// void printLetter(char* charPtr)
// {
//     cout<<*charPtr<<endl;
// }

void print(void* ptr, char type)
{
    switch (type)
    {
    case 'i':
    cout<<*((int*)ptr)<<endl;           // casting a void pointer to int
    break;
    case 'c':
    cout<<*((char*)ptr)<<endl;
    break;
    case 'f':
    cout<<*((float*)ptr)<<endl;
    break;
        

    
    default:
        break;
    }
}

int main()
{
    int number = 5;
    // printNumber(&number);

    char letter = 'a';
    // printLetter(&letter);

    float fnum = 4.36;


    print(&letter,'c');
    print(&number,'i');
    print(&fnum,'f');






    return 0;
}