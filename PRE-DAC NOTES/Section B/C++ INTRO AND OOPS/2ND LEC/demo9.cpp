#include<iostream>
using namespace std;
void acceptInput(int *ptr)
{
    cin>>*ptr;
}
void displayOutput(const int *ptr)
{
    cout<<"*ptr="<<*ptr<<endl;
}
void acceptInput(int &ptr)
{
    cin>>ptr;
}
void displayOutput(const int &ptr)
{
    cout<<"ptr="<<ptr<<endl;
}
int main()
{
    int value;

    cout<<"enter value::";
    acceptInput(&value);
    
    displayOutput(&value);

    cout<<"enter value1::";
    acceptInput(value);
    
    displayOutput(value);

    return 0;

}
     //int *ptr=NULL;
     //ptr=&no;                *ptr            r
     //or
     int no=10;
     int *ptr=&no;

     int a=10;
     int &r=a;