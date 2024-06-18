#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream hout("samplefile.txt");
    string name;
    cout<<"Enter your name"<<endl;
    //cin>>name;        // will not work for multiple word
    getline(cin,name);

    hout<<"My name is " +name;

    // closing the stream
    hout.close();

    ifstream hin("samplefile.txt");
    string content;

    //hin>>content;         // will not work for multiple words
    getline(hin,content);
    cout<<"The content of the file is  \n"<<content<<endl;
    hin.close();
    

    
    return 0;
}