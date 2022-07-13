#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a; // r is a reference of a
    // int *const r= &a;

    cout<<"a="<<a<<" \t &a="<<&a<<endl;
    cout<<"r="<<r<<" \t &r="<<&r<<endl;
    
    a=100;
    cout<<"a="<<a<<" \t &a="<<&a<<endl;
    cout<<"r="<<r<<" \t &r="<<&r<<endl;
    
    r=1000;
    cout<<"a="<<a<<" \t &a="<<&a<<endl;
    cout<<"r="<<r<<" \t &r="<<&r<<endl;

    r++;
    cout<<"a="<<a<<" \t &a="<<&a<<endl;
    cout<<"r="<<r<<" \t &r="<<&r<<endl;

    a++;
    cout<<"a="<<a<<" \t &a="<<&a<<endl;
    cout<<"r="<<r<<" \t &r="<<&r<<endl;

    {
        // we can create ref to obejct
        // we can not cretr a referece to const
        //int &r1=100; const

        //int &r1=NULL: // NULL=0
    }

    {
        int a1=10;
        const int &r1=a1;
        cout<<"r1="<<r1<<" \t &r1="<<&r1<<endl;
        cout<<"a1="<<a1<<" \t &a1="<<&a1<<endl;

        a1=100;

            cout<<"r1="<<r1<<" \t &r1="<<&r1<<endl;
        cout<<"a1="<<a1<<" \t &a1="<<&a1<<endl;
        
        //r1=1000; error a r1 is const

    }
 {
        const int a1=10;
        const int &r1=a1;
        cout<<"r1="<<r1<<" \t &r1="<<&r1<<endl;
        cout<<"a1="<<a1<<" \t &a1="<<&a1<<endl;

        //a1=100; error as a1 const 

        
        
        //r1=1000; error a r1 is const

    }

    return 0;

}