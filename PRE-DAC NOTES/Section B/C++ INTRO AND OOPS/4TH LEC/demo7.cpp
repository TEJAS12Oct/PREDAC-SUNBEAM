#include<iostream>
using namespace std;
#include<cstring>
namespace NCasting
{
    // polymorphic class
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
            virtual void Print()
            {
                cout<<"inside base class"<<endl;
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;

            }
            virtual ~Base()
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

  




    return 0;
}
// function overriding
// shape circle and rectangle
// diamond problem sol data member public
// diamond problem sol data member private using virtual inheritance
