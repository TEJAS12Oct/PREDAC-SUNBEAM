#include<stdio.h> 

int main()
{
    int num; 
    char ch; 
    double d1; 

    printf("%d\n",sizeof(num));// 4
    // sizof() ==> operator 
    // sizeof( ) ==> output will come in integer ==> %d is used 
    printf("%d\n",sizeof(ch));// 1
    printf("%d\n",sizeof(d1)); // 8 

    return 0; 
}