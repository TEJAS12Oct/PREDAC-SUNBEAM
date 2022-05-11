#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 20; 

    int *ptr = &num1;
    printf("num = %d\n",num1);// 10
    printf("*ptr = %d\n",*ptr);// 10 

    ptr = &num2; // ptr is now pointing to num2 
    // ptr is holding the address of num2 

    printf("Pointer address changed ...\n "); 
    printf("num = %d",num2);// 20
    printf("*ptr = %d",*ptr);// 20 


    return 0;
}
