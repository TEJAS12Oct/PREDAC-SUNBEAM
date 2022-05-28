#include<stdio.h> 
int main()
{
    int num = 10; 

    // i want to store the address of num
    // what is the type of num 
    // num --> type --> int 
    // i want to store the address of integer variable 

     int *ptr; // pointer declaration 
//ptr will store the address of int  
// ptr is a pointer to a integer 

    ptr = &num;  // referencing operation / direction operator 
    // & --> referencing operator / address-of-operator 

    printf("num = %d\n",num); // 10
    printf("&num = %u\n",&num); // 100 
    printf("ptr = %u\n",ptr); // 100 
    printf("&ptr = %u\n",&ptr); // 500 



    return 0;
}


/*
     Pointer size 
     32 bit compilation --> 4 byte (int*,float*,char*,double*)   
     64 bit compilation --> 8 byte(int*,float*,char*,double*)    

    int num = 10;  -->       int     *ptr // 4 
    float fvar = 20.5; -->   float   *fptr// 4 
    double dvar = 11.5; -->  double  *dptr // 4 
    char ch = 'A'      -->   char *cptr // 4 
*/
