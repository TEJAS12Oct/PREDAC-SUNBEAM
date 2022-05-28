#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; // init of pointer 

    
    printf("num = %d\n",num); // 10
    
    // * --> dereference operator/indirection operator
    //       value-at operator     
    printf("num = %d\n",*ptr); 
    /*
            *ptr 
            *--> value-at operator 

            valueat(ptr)
            valueat(100)
            10 
    
    
    */



    
    



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
