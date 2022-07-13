#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; 

    int **pptr = &ptr;  

    // int ***ppptr = &pptr; 
     
//pptr is a pointer pointing to a pointer to a integer 
// pptr is a pointer to pointer 
// pptr is holding a address of a pointer 
    
    // printf("num=%d\n",num); //10
    // printf("ptr=%u\n",ptr); //100
    // printf("&ptr=%u\n",&ptr); //500
    // printf("pptr=%u\n",pptr); //500
    // printf("&ptr=%u\n",&pptr); //700

     printf("**pptr = %d",**pptr);
     /*
            * --> value at operator 
                **pptr 

            valueat(valueat(pptr))
            valueat(valueat(500))
            valueat(100) 
            10 



     */


    return 0; 
}