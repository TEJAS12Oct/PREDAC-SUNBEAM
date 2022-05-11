#include<stdio.h> 
#pragma pack(1) 
struct test // Blue-print
{
    int a; // 4 
    char b; // 1 
    double d1; // 8  
    int c;  // 4      
};    

int main() 
{
    struct test t1;
    printf("%d",sizeof(t1)) ;  
    return 0;
}

// struct test // Blue-print
// {
//     int a; // 4 
//     char b; // 1 
    
// };    
// int main() 
// {
//     struct test t1;
//     printf("%d",sizeof(t1)) ;  
//     return 0;
// }
