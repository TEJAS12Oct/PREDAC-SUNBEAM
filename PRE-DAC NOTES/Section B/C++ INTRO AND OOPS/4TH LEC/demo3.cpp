#include<iostream>
using namespace std;
#include<cstring>
namespace NComposition
{
    class Date
    {
        private:
            int dd;
            int mm;
            int yy;
        public:
            Date()
            {
                this->dd=11;
                this->mm=6;
                this->yy=2000;
                cout<<"inside parameterless ctor of Date class"<<endl;
            }
            Date(int dd, int mm, int yy)
            {
                this->dd=dd;
                this->mm=mm;
                this->yy=yy;
                cout<<"inside parameterzied ctor of Date class"<<endl;
            }
            void Print()
            {
                cout<<" date::"<<endl;
                cout<<this->dd<<"-"<<this->mm<<"-"<<this->yy<<endl;
            }
            ~Date()
            {
                this->dd=0;
                this->mm=0;
                this->yy=0;
                cout<<"inside dtor of Date class"<<endl;
            }
    }; // end of date class

    class Person
    {
        private:
            char name[20];
            Date bdate;   
        public:
            Person() 
            {
                strcpy(this->name,"abcd");
                cout<<"inside parameterless ctor of Person class"<<endl;
            }  
            Person(char *name,int dd, int mm, int yy) :bdate(dd, mm ,yy)
            {
                strcpy(this->name,name);
                cout<<"inside parameterzied ctor of Person class"<<endl;
            }  
            void Print()
            {
                cout<<" Person name="<<this->name<<endl;
                this->bdate.Print();
            }
            ~Person() 
            {
                strcpy(this->name,"");
                cout<<"inside dtor of Person class"<<endl;
            } 
    }; // end of person class 
} // emd of namespace 
using namespace NComposition;
int main()
{
   /* Date d1; // paramaterless ctor
    cout<<"d1::"<<endl;
    d1.Print();
    cout<<"size of d1="<<sizeof(d1)<<endl;

    Date d2(20,3,2002); // paramaterized ctor
    cout<<"d2::"<<endl;
    d2.Print();
    cout<<"size of d2="<<sizeof(d2)<<endl;
    */

    Person p1; // paramaterless ctor
    cout<<"p1::"<<endl;
    p1.Print();
    cout<<"size of p1="<<sizeof(p1)<<endl;

    Person p2("pqr", 21,3,1992); // paramaterized ctor
    cout<<"p2::"<<endl;
    p2.Print();
    cout<<"size of p2="<<sizeof(p2)<<endl;
    return 0;
}