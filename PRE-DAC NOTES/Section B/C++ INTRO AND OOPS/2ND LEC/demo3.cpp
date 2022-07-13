#include<iostream>
using namespace std;
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
            Point()
            {
                this->xPosition=10;
                this->yPosition=20;
                cout<<"inside parameterless ctor of point class"<<endl;
            }
            // 2 paramterized ctor (1 arguement ctor)
             //Point(Point *const this, int value)
            Point(int value)
            {
                this->xPosition=value;
                this->yPosition=value;
                cout<<"inside  pameterized ctor(1 arguments) of point class"<<endl;
            }
            // 2 paramterized ctor (2 arguement ctor)
             //Point(Point *const this,int xposition, int yposition)
            Point(int xposition, int yposition)
            {
                this->xPosition=xposition;
                this->yPosition=yposition;
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
                cout<<"======================"<<endl;
                this->displayOutput();
                cout<<"======================"<<endl;

                this->xPosition=0;
                this->yPosition=0;
                cout<<"inside dtor of Point class"<<endl;
            }
    };

}// end of namespace

using namespace NPoint;

int main()
{
    Point p1; // paramterless ctor
    cout<<"p1::"<<endl;
    p1.displayOutput();

    Point p2(100,200); // parameterized 2 arguemnets
    cout<<"p2::"<<endl;
    p2.displayOutput();

    Point p3(400); // parameterized 1 arguemnets
    cout<<"p3::"<<endl;
    p3.displayOutput();
    
    return 0;
}
// ctor
// dtor
// facility input output
