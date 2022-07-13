#include<stdio.h> 
#include<stdlib.h> 
 
int main()
{
    // Heap section  --> dynamic memory 

    // void* calloc(size_t n , size_t size); 

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

    for(i=0;i<=2;i++)
    {
        printf("%d",*(ptr+i)); 
    }

    free(ptr); // To avoid memory leakage 

    ptr = NULL;   // To avoid dangling pointer   




    return 0;
}
