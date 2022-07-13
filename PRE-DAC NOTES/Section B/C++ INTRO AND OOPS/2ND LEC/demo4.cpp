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
            // setter method mutator
            // modify state of object
            void SetXposiion(int xposition)
            {
                this->xPosition= xposition;
            }
            void SetYposiion(int yposition)
            {
                this->yPosition= yposition;
            }
            // gettor method inspector
            // dont modify state of obejct
            int GetXposition()
            {
                return this->xPosition;
            }
            int GetYposition()
            {
                return this->yPosition;
            }
    };




}// end of namespace

using namespace NPoint;

int main()
{
    Point p1;
    cout<<"p1::"<<endl;
    int x, y;
    cout<<"enter xposition ::";
    cin>>x;
    cout<<"enter yposition ::";
    cin>>y;

    p1.SetXposiion(x);
    p1.SetYposiion(y);

    x= p1.GetXposition();
    y= p1.GetYposition();

    cout<<"p1 x position ="<<x<<endl;
    cout<<"p1 y position ="<<y<<endl;
    
   
    
    return 0;
}
// ctor
// dtor
// facility input output
// Mutator
// Inspectors
