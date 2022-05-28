#include<stdio.h> 
int main()
{
    int num = 10; // int *ptr 
    char ch = 'A'; // char * cptr 
    float fvar = 10.22; // float * fptr 
    
    void *ptr; // generic pointer

    int *pptr = NULL ; // pointer declaration / Wild pointer   
    

    ptr = &num; 
    printf("%d ",*(int*)ptr);     

    ptr = &ch; // pointing to char

    printf("%c ",*(char*)ptr);

    ptr = &fvar; // pointer to float

    printf("%f ",*(float*)ptr);       


    return 0;
}
