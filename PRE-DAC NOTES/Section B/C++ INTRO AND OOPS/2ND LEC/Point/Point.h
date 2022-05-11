#ifndef POINT_H_
#define POINT_H_

namespace NPoint
{
    class Point
    {
        private:
            int xPosition;
            int yPosition;
        public:

            Point(); 
            Point(int value); 
            Point(int xposition, int yposition);
            void accpetInput();
            void displayOutput();
            void SetXposiion(int xposition);
            void SetYposiion(int yposition);
            int GetXposition();
            int GetYposition();
            ~Point();
           
    };
}
#endif