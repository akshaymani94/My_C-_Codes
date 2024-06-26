#include<iostream>
#include<cstring>
using namespace std;

class CWH                       // Abstract base class
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r)
        {
            title = s;
            rating = r;

        }
        virtual void display()   // if we dont give virtual then this cout would have been executed twice
        {
            cout<<"Bogus code"<<endl;

        }
};


class CWHVideo : public CWH
{
    float videoLength;
    public:
        CWHVideo(string s,float r, float vl) : CWH(s,r)
        {
            videoLength = vl;
        }

        void display()
        {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"With rating "<<rating<<" out of 5 stars "<<endl;
            cout<<"Length of this video is "<<videoLength<<" minutes "<<endl;
        }

};

class CWHText : public CWH
{
    int words;
    public:
        CWHText(string s,float r, int wc) : CWH(s,r)
        {
            words = wc;
        }

        void display()
        {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"With rating "<<rating<<" out of 5 stars "<<endl;
            cout<<"No of words in this text tutorial is "<<words<<" words "<<endl;
        }

};


int main()
{
    string title;
    float rating,vlen;
    int words;


    // for video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();


    // for text
    title = "Django tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djtext(title, rating, words);
    //djtext.display();

    
    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();         // will call the derived version only . becoz virtual
    tuts[1]->display();         // will call the derived version only . becoz virtual


    return 0;
}