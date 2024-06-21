#include<iostream>
#include<map>
#include<string>

using namespace std;


// maps is an associative array

int main()
{
    map<string,int> marksMap;    

    marksMap["Harry"] = 98;
    marksMap["Jack"] = 56;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Kozume",16},{"Koruma",78}});


    map<string,int> :: iterator iter;
    for (iter=marksMap.begin(); iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";  // *iter points initially to the first key value pair. To get the first elemnt of that pair we use .first to access the first element and .second to access the second element.
    }
    
    cout<<"The size is  :  "<<marksMap.size()<<endl;
    cout<<"The maxsize is  :  "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is  :  "<<marksMap.empty()<<endl;





    return 0;
}