#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string st= " AKSHAY";
    // opening files using constructor and reading it
    ofstream out("samplefile.txt");  // made object out for ofstream
    // ofstream is a class which we got from fstream
    out<<st;
    return 0;
}