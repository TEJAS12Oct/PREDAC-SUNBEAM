#include<iostream>
using namespace std;
int main()
{

    int *ptr=NULL, no, index;

    cout<<"how many elements u want::";
    cin>>no;

    ptr= new int[no];
    
    cout<<"enter elements of array::"<<endl;
    for(index=0; index<no; index++)
    {
        cout<<"ptr["<<index<<"]::";
        cin>>ptr[index];
    }

    cout<<"elements of array::"<<endl;
    for(index=0; index<no; index++)
    {
        cout<<"ptr["<<index<<"]\t"<< ptr[index]<<"\t["<<&ptr[index]<<"]"<<endl;
    }

    delete [] ptr;
    ptr=NULL;
    cout<<"free mmeory::"<<endl;

}