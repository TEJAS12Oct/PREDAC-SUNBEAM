#include<stdio.h> 

int main()
{
    short int num = 90000; 
    /*
            short int --> 2 bytes 
            2 bytes --> 16 bits 
            2 to power the 16 --> 65536 
    
            90000 - 65536  --> 24,464 ( yes )
    */
    printf("%hd",num); 
    return 0; 
}