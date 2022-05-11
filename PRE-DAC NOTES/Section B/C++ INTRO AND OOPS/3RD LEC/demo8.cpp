#include<iostream>
using namespace std;
#include<cstdlib>
namespace NPoint
{
    class Point
    {
        private:
            int xPosition;
            int yPosition;
        public:
            // 1 paramterless ctor or no arguement ctor
            //Point(Point *const this)
            // ctor init list
            Point():xPosition(10), yPosition(20)
            {
             
                cout<<"inside parameterless ctor of point class"<<endl;
            }
            // 2 paramterized ctor (1 arguement ctor)
             //Point(Point *const this, int value)
            Point(int value):xPosition(value), yPosition(value)
            {
              
                cout<<"inside  pameterized ctor(1 arguments) of point class"<<endl;
            }
            // 2 paramterized ctor (2 arguement ctor)
             //Point(Point *const this,int xposition, int yposition)
            Point(int xposition, int yposition):xPosition(xposition), yPosition(yposition)
            {
              
                cout<<"inside  pameterized ctor(2 arguments) of point class"<<endl;
            }
            //void accpetInput(Point * const this)
            void accpetInput()
            {
                cout<<"Enter xposition::";
                cin>>this->xPosition;
                cout<<"Enter yposition::";
                cin>>this->yPosition;
            }
            
            //void displayOutput(Point * const this)
            void displayOutput()
            {
                cout<<"this->xPosition="<<this->xPosition<<"\t["<<&this->xPosition<<"]"<<endl;
                cout<<"this->yPosition="<<this->yPosition<<"\t["<<&this->yPosition<<"]"<<endl;

            }
            ~Point()
            {
                this->xPosition=0;
                this->yPosition=0;
                cout<<"inside dtor of point class"<<endl;
            }
    };

}// end of namespace

using namespace NPoint;

int main()
{
    Point *ptr1= (Point*)malloc(sizeof(Point)*1);
    cout<<" ptr1="<<endl;
    ptr1->displayOutput();

    free(ptr1);
    ptr1=NULL;
    cout<<"free memory"<<endl;

    Point *ptr2= new Point; // paraeterless
    cout<<" ptr2="<<endl;
    ptr2->displayOutput();

    delete ptr2;
    ptr2=NULL;

    cout<<"memory free"<<endl;


    Point *ptr3= new Point(111,222); // paraeterized
    cout<<" ptr3="<<endl;
    ptr3->displayOutput();

    delete ptr3;
    ptr3=NULL;

    cout<<"memory free"<<endl;
    return 0;
}