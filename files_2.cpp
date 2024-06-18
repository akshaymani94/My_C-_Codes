#include<iostream>
#include<fstream>
#include<string>


using namespace std;
// second method to openfiles 


int main()
{
    ofstream out;
    out.open("samplefile.txt");    // there is an open method
    out<<"This is me\n";
    out<<"This me\n";
    out<<"This \n";


    out.close();

    ifstream in;
    string st;
    in.open("sample2.txt");

    while(in.eof() == 0)    // till when end of file is encountered its value will be 0
    {
        getline(in,st);
        cout<<st<<endl;
    }


    in.close();

    return 0;
}