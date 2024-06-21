#include<iostream>
#include<cstring>
using namespace std;

class CWH                       // Abstract base class
{        /* We made this base class knowing very well that we 
will be able to create CWHVideo and CWHText through inheritance.
We knew it from the start that the display function has to be overridden
 Such classes which are made knowing very well that we will make derived class 
 this is called abstract base class*/             
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r)
        {
            title = s;
            rating = r;

        }
        /*We need to create a function knowing that we have to over ride any way*/
       /* But if we dont create a display function in derived class, themn this display function will
       run. But if you dont want that to happen. And will in case hhave to make a display function in derived class. For this
       we make a pure virtual class. Then we will be forced to write the display function for the derived function*/
        virtual void display()=0;       // do -nothing function --> pure virtual function
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