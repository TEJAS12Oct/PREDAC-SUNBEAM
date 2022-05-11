#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 20; 
    int result; 
    int *ptr1 = &num1 ; 
    int *ptr2 = &num2; 
    //result = ptr1 + ptr2; // NOT OK 
     //result = ptr1 * ptr2; // NOT OK
     //result = ptr1 / ptr2;// NOT OK   
     result = ptr1 - ptr2; // ALLOWED    


    return 0;
}
