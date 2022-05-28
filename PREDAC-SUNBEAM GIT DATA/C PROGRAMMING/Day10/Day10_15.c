#include<stdio.h> 


int main()
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr; 

    printf("%u\n",&num); //100 
    printf("%u\n",ptr); //100 
    printf("%u\n",*pptr);// 100  

    /*
            *pptr

            valueat(pptr)
            valueat(500)
            100 


    */



    return 0;
}