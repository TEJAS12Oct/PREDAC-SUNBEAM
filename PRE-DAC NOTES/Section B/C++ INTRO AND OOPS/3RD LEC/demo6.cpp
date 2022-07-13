#include<iostream>
using namespace std;
int main()
{
    int *ptr=NULL;

    ptr= new int;
    // ptr= (int*)malloc(sizeof(int)*1);
   // ptr= new int(100);

    cout<<"*ptr="<<*ptr<<endl;
    cout<<"enter *ptr=";
    cin>>*ptr;  // cin>>ptr; error
    cout<<"*ptr="<<*ptr<<endl;

    delete ptr;
    ptr=NULL;
    cout<<"free mmeory::"<<endl;

}