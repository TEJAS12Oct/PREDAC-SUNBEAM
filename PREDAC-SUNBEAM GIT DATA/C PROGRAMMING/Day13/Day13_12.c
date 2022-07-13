#include<stdio.h>
int add(int a, int b); 
int main()
{
    // int --> int* 
    // float --> float* 

    // function pointer 

   // int (*ptr)(int); 
 //ptr is a pointer to a function that 
 // accepts the int and returns the int    

     int (*ptr1)(int,int) = add;
    //assign the address using function designator   

     int (*ptr2)(int,int) = &add; 
     //assign the address using address of operator  

    // calling the function 
    // dereferencing 
    (*ptr1)(10,20); 

    ptr2(2,3); 

    //array of function pointer 
    // int (*arr[4])(int,int) 

    return 0; 
}

int add(int a, int b)
{
    printf("Result = %d ",a+b); 
}