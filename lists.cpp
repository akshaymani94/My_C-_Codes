#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it=lst.begin(); it !=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}




// lists are containers used fot storing data

int main()
{
    list<int> list1;    // list of zero length. empty list with zero elements
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);


// to remove lements from the list
    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();     // remove first element from list
    // display(list1);
    // list1.remove(1);    // remove element 1
    // display(list1);


// to sort the list
    // list1.sort();
    // display(list1);






    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<endl<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    list<int> list2(3);    // empty list of size 3. There are 3 elemensts, but these elements dont have any values
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    // list2.push_back(12);
    // list2.push_back(78);

    display(list2);

    // To merge to lists

    // list1.merge(list2);
    // cout<<"List 1 after merging : ";
    // display(list1);

    // to sort and then merge
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List 1 after merging : ";
    // display(list1);


// To reverse the list
    // list1.reverse();
    // display(list1);



  
  
    return 0;
}