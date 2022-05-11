#include<iostream>
using namespace std;
#include"Point.h"
using namespace NPoint;
#include"Point.h"
using namespace NPoint;
int main()
{
    cout<<"Multiple file demo::"<<endl;
    Point p1;
    cout<<"p1::"<<endl;
    int x, y;
    cout<<"enter xposition ::";
    cin>>x;
    cout<<"enter yposition ::";
    cin>>y;

    p1.SetXposiion(x);
    p1.SetYposiion(y);

    x= p1.GetXposition();
    y= p1.GetYposition();

    cout<<"p1 x position ="<<x<<endl;
    cout<<"p1 y position ="<<y<<endl;
    
    Point p2(111,222);
    cout<<"p2::"<<endl;
    p2.displayOutput();


    Point p3(500);
     cout<<"p3::"<<endl;
    p3.displayOutput();
   
    
    return 0;
}