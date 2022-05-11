#include<iostream>
using namespace std;
namespace NStaticDemo
{
    class StaticDemo
    {
        private:
            // non static data member
            int id;
            int a;
            int b;
            // static data member
            static int counter;
        public:
            StaticDemo()
            {
                StaticDemo::counter++;
                this->id= StaticDemo::counter;
                this->a=10;
                this->b=20;

            }
            StaticDemo(int a, int b)
            {
                StaticDemo::counter++;
                this->id= StaticDemo::counter;
                this->a=a;
                this->b=b;

            }
            void Print()
            {
                cout<<"this->id="<<this->id<<"["<<&this->id<<"]"<<endl;
                cout<<"this->a="<<this->a<<"["<<&this->a<<"]"<<endl;
                cout<<"this->b="<<this->b<<"["<<&this->b<<"]"<<endl;
                cout<<"StaticDemo::counter="<<StaticDemo::counter<<"["<<&StaticDemo::counter<<"]"<<endl;

              }
            ~StaticDemo()
            {
                this->id= 0;
                this->a=0;
                this->b=0;

            }

    }; //end of static demo class
    // global defineation for static data member
   int StaticDemo::counter=1000;

}// end of static demo class
using namespace NStaticDemo;
int main()
{
    StaticDemo s1;
    cout<<"s1::"<<endl;   //counter =1001 id 1001
    s1.Print();
    cout<<"size of s1="<<sizeof(s1)<<endl;

    StaticDemo s2;  // counter 1002 id 1002
    cout<<"s2::"<<endl;;
    s2.Print();
    cout<<"size of s2="<<sizeof(s2)<<endl;

    cout<<"s1::"<<endl;   //counter =1002 id 1001
    s1.Print();
   //        counter 1003   id =1003
    StaticDemo s3, s4;  
                  //counter 1004  id 1004
    cout<<"s3::"<<endl;;
    s3.Print();    // counter 1004  id 1003
    cout<<"size of s3="<<sizeof(s3)<<endl;

    cout<<"s4::"<<endl;;
    s4.Print();   // counter 1004 id 1004
    cout<<"size of s4="<<sizeof(s4)<<endl;
    return 0;
}
/*
struct emp
{
    int empno;
    char name[10];
    float sal;
};
struct emp e1;
*/
