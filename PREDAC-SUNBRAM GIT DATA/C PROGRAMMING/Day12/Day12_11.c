#include<stdio.h> 
#include<stdlib.h> 
 
int main()
{
    // Heap section  --> dynamic memory 

    // void* malloc(size_t size); 

    float *ptr; 

    ptr = (float*)malloc(sizeof(float));//Request 4 bytes    

    if(ptr==NULL)// if fail 
    {
        printf("Unable a allocate the memory");
        return 0;  
    }

    *ptr = 30.25;// use the memory 

    printf("The value within the block is %f",*ptr);      

    free(ptr); // To avoid memory leakage 

    ptr = NULL;// To avoid dangling pointer  

    return 0;
}
