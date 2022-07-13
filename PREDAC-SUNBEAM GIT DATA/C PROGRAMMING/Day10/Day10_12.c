#include<stdio.h> 

int main()
{
    int *ptr; 
    char *cptr; 
    double *dptr; 
    float *fptr; 
 printf("scale factor : %d %d %d %d\n",sizeof(*ptr),sizeof(*cptr),sizeof(*dptr),sizeof(*fptr));    
 printf("Size : %d %d %d %d\n",sizeof(ptr),sizeof(cptr),sizeof(dptr),sizeof(fptr));    

    return 0; 
}