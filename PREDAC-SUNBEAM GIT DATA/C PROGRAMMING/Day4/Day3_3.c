#include<stdio.h> 

int main()
{
    int num = 100; //variable decl + init  
    // 4 byte 
    char ch ='A'; ////variable decl + init 
    // 1 byte 
    double d1 = 10.33;//variable decl + init   
    // 8 byte 

    float fvar = 12.33; 
    // 4 bytes   

    // sizeof ==> operator 
    // sizeof ==> size of type in bytes 
    // size ==> integer ==> %d 
    // char ==> 1 byte ==> %d 

    printf("sizeof(int) = %d\n",sizeof(num)); // 4 bytes

    printf("sizeof(char)= %d\n",sizeof(ch)); // 1 byte 

    printf("sizeof(double)= %d\n",sizeof(d1)); // 8 bytes    

    printf("sizeof(float) = %d\n",sizeof(fvar));// 4 bytes  

    return 0; 
}