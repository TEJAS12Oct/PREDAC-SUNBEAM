#include<iostream>
using namespace std;
namespace NConstDemo
{
    class ConstDemo
    {
        private:
            int a;
            mutable int b;
            const int c;
            int const d;
        public:
          // ctor init list
            ConstDemo():a(10),b(20),c(30),d(40)
            {
                //this->a=10;   // allowed a, b are not const data member 
                //this->b=20;
               // this->c=30;  // error as c d are const data member
                //this->d=40;
            }
            ConstDemo(int a, int b, int c, int d):a(a),b(b),c(c),d(d)
            {
                //this->a=a;   // allowed a, b are not const data member 
                //this->b=b;
               // this->c=c;  // error as c d are const data member
                //this->d=d;
            }
            void Print()
            {
                this->a=100;  // allowed  a and b
                this->b=200;
                //this->c=300;  // not allowed as c d are const data member
                //this->d=400;
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;
                cout<<"this->c="<<this->c<<endl;
                cout<<"this->d="<<this->d<<endl;

            }
             // we can not modify state object in const member fun

            void Show() const
            {
               // this->a=101;  // nor allowed as show is const member fun a and b
                this->b=201; // allowed as b is mutable
                //this->c=301;  // not allowed as c d are const data member
                //this->d=401;
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;
                cout<<"this->c="<<this->c<<endl;
                cout<<"this->d="<<this->d<<endl;

            }
            ~ConstDemo()
            {
                this->a=0;   // allowed a, b are not const data member 
                this->b=0;
               // this->c=0;  // error as c d are const data member
                //this->d=0;
            }

    };
}// end if NConstDemo
using namespace NConstDemo;
int main()
{
    // non const obj can access both const member fun and non const member fun
    ConstDemo c1;
    cout<<"c1 show"<<endl;
    c1.Show();

    cout<<"c1 print"<<endl;
    c1.Print();
    cout<<"size of c1="<<sizeof(c1)<<endl;

    ConstDemo c2(1,2,3,4);
    cout<<"c2 show"<<endl;
    c2.Show();

    cout<<"c2 print"<<endl;
    c2.Print();
    cout<<"size of c2="<<sizeof(c2)<<endl;

    //  const obj can access only const member fun of class
    // const obj can not access non const member fun of class

    const ConstDemo c3;
    cout<<"c3 show"<<endl;
    c3.Show();

    cout<<"c3 print"<<endl;
   // c3.Print();
    cout<<"size of c3="<<sizeof(c3)<<endl;

    return 0;
}