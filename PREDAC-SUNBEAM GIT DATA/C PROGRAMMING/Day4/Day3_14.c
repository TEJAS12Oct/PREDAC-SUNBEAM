#include<stdio.h> 

int main()
{
    int num; 
    char ch;
    float fvar; 
    short int num1; 
    long int num2; 
    long long int num3; 
    double d1; 
    // sizeof()==> operator --> size in bytes 
    // size --> integer --> %d 
    // printf("int = %d\n",sizeof(num));  // 4
    // printf("char = %d\n",sizeof(ch)); // 1
    // printf("float = %d\n",sizeof(fvar)); // 4 
    // printf("double = %d\n",sizeof(d1)); // 8   
       
        // printf("65 = %d\n",sizeof(65));// 4 // sizeof(int)--> 4 
        // printf("'A' = %d\n",sizeof('A'));// sizeof('A')==> sizeof(65) ==> 4 
         
        // printf("12.33 = %d\n",sizeof(12.33)); // 8
        // printf("12.33f = %d\n",sizeof(12.33f));//4    
       
         printf("%d\n",sizeof(12L));// long ==>  4
         printf("%d\n",sizeof(12LL));// long long ==>  8
         printf("%d\n",sizeof(12u));   
         printf("%d\n",sizeof(12U));   
         return 0; 
}