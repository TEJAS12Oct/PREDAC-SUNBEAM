#include<iostream>
using namespace std;

namespace NArray
{
    class Array
    {
        private:
            int size;
            int *arr;
        public:
            Array(int size=5)
            {
                this->size= size;
                this->arr= new int[this->size];
                int index;
                for(index=0; index<this->size; index++)
                {
                    this->arr[index]=0;
                }
                cout<<"parameterized ctor with default arg of Array class"<<endl;
            }
            void acceptInput()
            {
                int index;
                for(index=0; index<this->size; index++)
                {
                    cout<<"this->arr["<<index<<"]";
                    cin>>this->arr[index];
                }
            }
             void printOutput()
            {
                int index;
                for(index=0; index<this->size; index++)
                {
                    cout<<"this->arr["<<index<<"]\t"<<this->arr[index]<<"\t["<<&this->arr[index]<<"]"<<endl;;;
                }
            }
            ~Array()
            {
                if(this->arr!=NULL)
                {
                    delete [] this->arr;
                    this->arr=NULL;
                }
                 cout<<"dtor of Array class"<<endl;

            }

             //default copy ctor does shallow copy



    }; //end of class array
}// end of namespace
using namespace NArray;
int main()
{
    Array a1(4);
    cout<<"a1::"<<endl;
    a1.acceptInput();
    cout<<"a1::"<<endl;
    a1.printOutput();

    Array a2=a1;   // Array a2(a1);   copy ctor
    cout<<"a2::"<<endl;
    a2.printOutput();
    return 0;
}