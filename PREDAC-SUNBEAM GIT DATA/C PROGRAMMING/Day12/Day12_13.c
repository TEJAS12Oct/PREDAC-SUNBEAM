#include<stdio.h> 
#include<stdlib.h> 
 
int main()
{
    // Heap section  --> dynamic memory 

    // void* realloc(void *ptr , size_t size); 

    int *ptr,i; 

    ptr = (int*)calloc(3,sizeof(int)); 

    if(ptr==NULL)// if fail 
    {
        printf("Unable a allocate the memory");
        return 0;  
    }
    
    for(i=0;i<=2;i++)
    {
        *(ptr+i) = 10 * (i + 1); 
    }

    ptr= (int*)realloc(ptr,5*sizeof(int));

    ptr[3]=23; 
    ptr[4]=84; 
    for(i=0;i<=4;i++)
    {
        printf("%d ",*(ptr+i)); 
    }


    free(ptr); // To avoid memory leakage 

    ptr = NULL;   // To avoid dangling pointer   




    return 0;
}
