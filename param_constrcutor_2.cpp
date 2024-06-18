#include<iostream>
#include<cmath>
using namespace std;


class Point
{
    int x,y;

    friend double dist(Point p, Point q);

    public:
        
        Point(int a, int b)
        {
            x=a;
            y=b;
        }

        void displayPoint()
        {
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }

};
/*
 Create a function which tkes 2 point objects and calculates
distance between them
*/
double dist(Point p, Point q)
{
    double d;
    d =  sqrt(((p.x - q.x)*(p.x - q.x))+((p.y - q.y)*(p.y - q.y)));
    return d;
}


int main()
{
    Point p(0,1);
    p.displayPoint();
    Point q(0,6);
    q.displayPoint();

    double distance = dist(p,q);
    cout<<"The distance is "<<distance<<endl; 

    return 0;
}