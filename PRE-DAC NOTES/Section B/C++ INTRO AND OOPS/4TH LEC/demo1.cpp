#include<iostream>
using namespace std;
int main()
{
    int no1, no2, ans;

    try
    {
        cout<<"Enter No1::" ;
        cin>>no1;
        cout<<"Enter No2::" ;
        cin>>no2;
        if(no2==0)
                //throw 'a';
               // throw 1.1f;
                //throw 1.1F;
             // throw 1.1;
            //throw 1;    // int
             throw __LINE__+1 ;
        ans= no1/no2;
       
        cout<<"ans="<<ans<<endl;
    }
    catch(int no)
    {
        cout<<"inside int block"<<endl;
        cout<<"can not divide by zero"<<endl;
        cout<<"error due to line no="<<no<<endl;
        cout<<"file="<<__FILE__<<endl;
        cout<<" date="<<__DATE__<<" time="<<__TIME__<<endl;
    }
    catch(int no)
    {
        cout<<"inside int block2"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    catch(float no)
    {
        cout<<"inside float block"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    catch(double no)
    {
        cout<<"inside double block"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    catch(char no)
    {
        cout<<"inside char block"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
     catch(...)
    {
        cout<<"inside generic block"<<endl;
        cout<<"can not divide by zero"<<endl;
    }
    return 0;
} 