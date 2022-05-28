#include<stdio.h> 

int main()
{
    int num; 
    char ch; 
    double d1; 
    short int s1; 
    
    // sizeof is evaluated at compile time 

    printf("%d\n",sizeof(num+ch+d1));//8 

    printf("%d\n",sizeof(num+ch));//4

    printf("%d\n",sizeof(num+d1));//8
     
    printf("%d\n",sizeof(10 + 2 ));//4

    printf("%d\n",sizeof(12.33 + 'A' ));

    printf("%d\n",sizeof(12.33f + 'A' ));

    printf("%d\n",sizeof(s1 + ch ));
    //                   short + char --> 4  

    return 0; 
}