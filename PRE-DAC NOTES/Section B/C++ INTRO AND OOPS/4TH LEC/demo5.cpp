#include<iostream>
using namespace std;
#include<cstring>
namespace NCasting
{
   class Base
   {
       private:
            int a;
            int b;
        public:
            Base()
            {
                this->a=0;
                this->b=0;
                cout<<"inside parameterless ctor of base class"<<endl;
            }
            Base(int a, int b)
            {
                this->a=a;
                this->b=b;
                cout<<"inside parameteized ctor of base class"<<endl;
            }
            void Print()
            {
                cout<<"inside base class"<<endl;
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;

            }
            ~Base()
            {
                this->a=0;
                this->b=0;
                cout<<"inside dtor of base class"<<endl;
            }

   }; //end of base base

   class Derived: public Base
   {
       private:
            int c;
        public:
            Derived()
            {
                this->c=0;
                cout<<"inside parameterless ctor of Derived class"<<endl;
            }
            Derived(int a, int b, int c):Base(a,b)
            {
                this->c=c;
    
                cout<<"inside parameteized ctor of Derived class"<<endl;
            }
            void Print()
            {
                Base::Print();
                cout<<"inside Derived class"<<endl;
                cout<<"this->c="<<this->c<<endl;

            }
            ~Derived()
            {
                this->c=0;
                cout<<"inside dtor of Derived class"<<endl;
            }

   }; //end of base base
} // emd of namespace 
using namespace NCasting;
int main()
{
    Base *ptrBase= new Derived; // upcasting
    cout<<"ptrBase::"<<endl;
    ptrBase->Print();

    delete ptrBase;
    ptrBase=NULL;

    Derived obj1;
    Base *ptrBase1= &obj1;  // upcasting

    delete ptrBase1;
    ptrBase1=NULL;


    //Derived *ptrderived= new Base; // down casting
    Base obj3;
   // Derived *ptrDervied=&obj3; // down loading



    return 0;
}