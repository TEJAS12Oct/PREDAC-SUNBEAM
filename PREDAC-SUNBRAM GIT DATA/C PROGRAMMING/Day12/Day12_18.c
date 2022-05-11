#include<stdio.h> 
#define SWAP(a,b,type) { type t = a ; a = b ; b = t ; }

int main()
{
    int a,b; 
    a=10; 
    b=11; 
    SWAP(a,b,int); 
    printf("%d%d",a,b); 

    return 0; 
}