#include<iostream>
using namespace std;
#include"Point.h"
using namespace NPoint;

 //returnType className::MemberfunName(dataType Parameters)


        // 1 paramterless ctor or no arguement ctor
            //Point(Point *const this)
            // ctor init list
            Point:: Point()
            {
                this->xPosition=10;
                this->yPosition=20;
                cout<<"inside parameterless ctor of point class"<<endl;
            }
            // 2 paramterized ctor (1 arguement ctor)
             //Point(Point *const this, int value)
            Point:: Point(int value)
            {
               this->xPosition=value;
               this->yPosition=value;
               cout<<"inside  pameterized ctor(1 arguments) of point class"<<endl;
            }
            // 2 paramterized ctor (2 arguement ctor)
             //Point(Point *const this,int xposition, int yposition)
            Point::Point(int xposition, int yposition)
            {            
                 this->xPosition=xposition;
                 this->yPosition=yposition;
                cout<<"inside  pameterized ctor(2 arguments) of point class"<<endl;
            }
            //void accpetInput(Point * const this)
            void Point::accpetInput()
            {
                cout<<"Enter xposition::";
                cin>>this->xPosition;
                cout<<"Enter yposition::";
                cin>>this->yPosition;
            }
            
            //void displayOutput(Point * const this)
            void Point::displayOutput()
            {
                cout<<"this->xPosition="<<this->xPosition<<"\t["<<&this->xPosition<<"]"<<endl;
                cout<<"this->yPosition="<<this->yPosition<<"\t["<<&this->yPosition<<"]"<<endl;

            }
            // setter method mutator
            // modify state of object
            void Point::SetXposiion(int xposition)
            {
                this->xPosition= xposition;
            }
            void Point::SetYposiion(int yposition)
            {
                this->yPosition= yposition;
            }
            // gettor method inspector
            // dont modify state of obejct
            int Point::GetXposition()
            {
                return this->xPosition;
            }
            int Point::GetYposition()
            {
                return this->yPosition;
            }

            Point::~Point()
            {
                cout<<"======================"<<endl;
                this->displayOutput();
                cout<<"======================"<<endl;

                this->xPosition=0;
                this->yPosition=0;
                cout<<"inside dtor of Point class"<<endl;
            }
