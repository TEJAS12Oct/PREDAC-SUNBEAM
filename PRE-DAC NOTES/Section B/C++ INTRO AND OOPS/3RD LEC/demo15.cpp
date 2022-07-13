#include<iostream>
using namespace std;

namespace NArray
{
    template<class Type>
    class Array
    {
        private:
            int size;
            Type *arr;
        public:
            Array(int size=5)
            {
                this->size= size;
                this->arr= new Type[this->size];
                int index;
                for(index=0; index<this->size; index++)
                {
                    this->arr[index]=0;
                }
            }
           //className( const className &objnmae)
             Array(const Array&other)
            {
                // a2        other is referebce a1
                this->size= other.size;  // 1 copy size
                this->arr= new Type[this->size]; // 2 allocate memory
                int index;
                //3 copy date
                for(index=0; index<this->size; index++)
                {
                    this->arr[index]=other.arr[index];
                }
                cout<<"copy ctor of Array class"<<endl;
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
                    cout<<"this->arr["<<index<<"]\t"<<this->arr[index]<<"\t["<<(void*)&this->arr[index]<<"]"<<endl;;;
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
    Array<int> a1(4);
    cout<<"a1::"<<endl;
    a1.acceptInput();
    cout<<"a1::"<<endl;
    a1.printOutput();

// copy ctor
    Array<int> a2=a1;   // Array a2(a1);   copy ctor
    cout<<"a2::"<<endl;
    a2.printOutput();

    {
        Array<float> a1(4);
        cout<<"a1::"<<endl;
        a1.acceptInput();
        cout<<"a1::"<<endl;
        a1.printOutput();

// copy ctor
        Array<float> a2=a1;   // Array a2(a1);   copy ctor
        cout<<"a2::"<<endl;
        a2.printOutput();
    }
    {
        Array<char> a1(4);
        cout<<"a1::"<<endl;
        a1.acceptInput();
        cout<<"a1::"<<endl;
        a1.printOutput();

// copy ctor
        Array<char> a2=a1;   // Array a2(a1);   copy ctor
        cout<<"a2::"<<endl;
        a2.printOutput();
    }
    return 0;
}
// template fun -  swap function
// template class  array class