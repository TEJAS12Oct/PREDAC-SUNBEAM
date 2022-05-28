#include<stdio.h> 

int main(int argc, char const *argv[])
{
    // a.exe 1 2 3 4 

    // int argc --> argument count 
    // a.exe 
    // 1 
    // 2
    // 3
    //printf("%s",argv[2]);  
    //printf("%d",argc); 
    
    int i; 
    for(i=0;i<argc;i++)
    {
        puts(argv[i]); 
    }
    printf(" \n %d",argv[argc]); 
    
    return 0;
}
// command line argument 
// console-independent programming 


