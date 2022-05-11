#include<stdio.h> 

int main() 
{
    // 100 --> decimal 
    // 0100 --> octal 
    printf("%o\n",0100); // octal 
    printf("%d\n",0100);// octal to decimal  

    //0x23 --> hexadecimal 
    printf("%x\n",0x23);// hexadecimal
    printf("%d\n",0x23);// hex to decimal   
    printf("%ld\n",100l);// long 
    printf("%ld\n",100L);// Long
    printf("%u\n",100u);// unsigned     
    printf("%u\n",100U);// unsigned     
    return 0; 
}
// 23.45 --> double  --> 8 bytes 
// 23.45f --> float  --> 4 
// 23.45F --> float  --> 4 