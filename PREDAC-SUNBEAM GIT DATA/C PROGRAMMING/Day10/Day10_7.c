#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; // init of pointer 

    
    printf("Initial values \n"); 
    printf("num = %d\n",num); // 10
    printf("*ptr = %d\n",*ptr); 

    *ptr = 20; 
    /*
            * --> value-at   

            *ptr = 20 

            valueat(ptr) = 20 
            valueat(100) = 20 

    */
    
    printf("After first  update \n"); 
    printf("num = %d\n",num); // 20 
    printf("*ptr = %d\n",*ptr);// 20  
    /*
            *ptr 
            valueat(ptr)
            valueat(100)
            20 

    */
   *ptr = 30; 
    printf("After second  update \n"); 
    printf("num = %d\n",num); // 30 
    printf("*ptr = %d\n",*ptr);// 30  
   




    
    



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
