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
           
            // paramterized ctor with default arguments
            Point(int xposition=10, int yposition=20) :xPosition(xposition), yPosition(yposition)
            {
               
                cout<<"inside  paramterized ctor with default arguments of point class"<<endl;
            }
            void accpetInput()
            {
                cout<<"Enter xposition::";
                cin>>this->xPosition;
                cout<<"Enter yposition::";
                cin>>this->yPosition;
            }
            void displayOutput()
            {
                cout<<"this->xPosition="<<this->xPosition<<"\t["<<&this->xPosition<<"]"<<endl;
                cout<<"this->yPosition="<<this->yPosition<<"\t["<<&this->yPosition<<"]"<<endl;

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

//  a[i] == *(a+i)
//  mat[r][c] == *(*(mat+r)+c)