#include<iostream>
using namespace std;

// void swap(int n1, int n2); // call by value
// void swpa(int *n1, int *n2); // call by address pointer

// n1 is reference of no1
// n2 is refernece of no2
namespace NSwap
{
        template<class Type>
        void swap(Type &n1, Type &n2)
        {
            Type temp;
            cout<<"in my swap"<<endl;
            cout<<" before swap in swap n1="<<n1<<" n2="<<n2<<endl;
            temp=n1;
            n1=n2;
            n2=temp;
            cout<<" after swap in swap n1="<<n1<<" n2="<<n2<<endl;
            return;
        }
}
int main()
{
    {
        int no1, no2;
        
        cout<<"enter no1::";
        cin>>no1;

        cout<<"enter no2::";
        cin>>no2;
        cout<<" before swap in main no1="<<no1<<" no2="<<no2<<endl;
        NSwap::swap(no1, no2); // by reference
        cout<<" after swap in main no1="<<no1<<" no2="<<no2<<endl;
 
    }
    {
        float no1, no2;
    
        cout<<"enter no1::";
        cin>>no1;

        cout<<"enter no2::";
        cin>>no2;
        cout<<" before swap in main no1="<<no1<<" no2="<<no2<<endl;
        NSwap::swap(no1, no2); // by reference
        cout<<" after swap in main no1="<<no1<<" no2="<<no2<<endl;
 
    }
    {
        char no1, no2;
    
        cout<<"enter no1::";
        cin>>no1;

        cout<<"enter no2::";
        cin>>no2;
        cout<<" before swap in main no1="<<no1<<" no2="<<no2<<endl;
        NSwap::swap(no1, no2); // by reference
        cout<<" after swap in main no1="<<no1<<" no2="<<no2<<endl;
 
    }
    return 0;
}