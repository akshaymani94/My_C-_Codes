#include<iostream>
using namespace std;

// using pointers to return multiple values from a function

/*
int getMin(int numbers[],int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i]<min)
        {
            min = numbers[i];
        }
    
    }
    return min;
}

int getMax(int numbers[],int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i]>max)
        {
            max = numbers[i];
        }
    
    }
    return max;
}

*/

// Inorder to return two values from our function we will have to pass two values 
// by a reference. We will have to pass the address ot the two values and this function is going to change
// the value that is stored at those addresses

// Since this function is receiving these to values as pointers, thsi means that this 
// function is directly going to modify the values that are stored at these addresses
void getMinAndMax(int numbers[],int size, int* min, int* max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i]>*max)
        {
            *max = numbers[i];
        }
    
    }   

        for (int i = 1; i < size; i++)
    {
        if (numbers[i]<*min)
        {
            *min = numbers[i];
        }
    
    } 
}


int main()
{
    int numbers[5] = {5,4,-2,29,6};
    int min=numbers[0];
    int max=numbers[0];

    // cout<<"Min is : "<<getMin(numbers,5)<<endl;
    // cout<<"Max is : "<<getMax(numbers,5)<<endl;
    getMinAndMax(numbers,5,&min,&max);      // passing a parameter using a reference
    // If you dont pass address then it will create a copy and what ever cahnegs that the
    // function makes to the cpoy we wwaont be able to see in the main function
    cout<<"Min is : "<<min<<endl;
    cout<<"Max is : "<<max<<endl;
        
    return 0;
}