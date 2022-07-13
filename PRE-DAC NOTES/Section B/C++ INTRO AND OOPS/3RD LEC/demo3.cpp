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
            }
            // 2 paramterized ctor (1 arguement ctor)
             //Point(Point *const this, int value)
            Point(int value)
            {
                this->xPosition=value;
                this->yPosition=value;
            }
            // 2 paramterized ctor (2 arguement ctor)
             //Point(Point *const this,int xposition, int yposition)
            Point(int xposition, int yposition)
            {
                this->xPosition=xposition;
                this->yPosition=yposition;
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
            // Point  p3= p1.Minus(p2);
            Point Minus(Point &other1)
            {
                Point temp;     // &p1           other1 is ref of p2
                temp.xPosition= this->xPosition- other1.xPosition;
                temp.yPosition= this->yPosition- other1.yPosition;

                return temp;
            }
             Point operator-(Point &other1)
            {
                Point temp;     // &p1           other1 is ref of p2
                temp.xPosition= this->xPosition- other1.xPosition;
                temp.yPosition= this->yPosition- other1.yPosition;

                return temp;
            }
            ~Point()
            {
                this->xPosition=0;
                this->yPosition=0;
            }
           

    };


}// end of namespace

using namespace NPoint;

int main()
{
    Point p1(10,20); // paramterized ctor 2 arguemnets
    cout<<"p1::"<<endl;
    p1.displayOutput();

    Point p2(30,40); // parameterized 2 arguemnets
    cout<<"p2::"<<endl;
    p2.displayOutput();

    Point p3= p1.Minus(p2);
    cout<<"p3:: sub using frined function"<<endl;
    p3.displayOutput();
    
    Point p4= p1-p2;  // Point p4= p1.operator-(p2);
    cout<<"p4::sub using operator overloading as memeber fun function"<<endl;
    p4.displayOutput();
    return 0;
}