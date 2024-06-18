#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st;
    // opening files using constructor and reading it
    ifstream in("sample2.txt");  // made object out for ofstream
    // ofstream is a class which we got from fstream
    //in>>st;    // reading the contents of the file into the variable st
    //will give only this. will not consider space and next line. Thereforeyou get line

    getline(in,st);
    cout<<st;
    return 0;
}