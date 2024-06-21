#include<iostream>
#include<vector>

using namespace std;

// Used when you need resizable array.

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";    
        cout<<v.at(i)<<" ";    // both are same
    }

    cout<<endl;
        
}

int main() 
{
    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector"<<endl;
        cin>>element;
        vec1.push_back(element);  // to see member function of vector gos snd check cpp.com
    }


    // vec1.pop_back();        // removes the last number
    display(vec1);

    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 566);
    // display(vec1);


    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,5, 566);                     // to insert 5 copies of 566
    display(vec1);
    
    return 0;
}