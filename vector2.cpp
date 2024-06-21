#include<iostream>
#include<vector>

using namespace std;


template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";    
        cout<<v.at(i)<<" ";    // both are same
    }

    cout<<endl;
        
}

int main() 
{
    vector<int> vec1;  // zero length vector
    // display(vec1);

    vector<char> vec2(4);  // 4 element vec
    // vec2.push_back('5');
    // display(vec2);

    vector<char> vec3(vec2);  // 4 element vec
    // display(vec3);

    vector<int> vec4(4,13); // 6 element vector of 3
    display(vec4);
    cout<<"Size is : "<<vec4.size()<<endl;

    return 0;
}