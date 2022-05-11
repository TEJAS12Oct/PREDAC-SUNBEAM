#include<stdio.h> 
#include<limits.h>  

int main()
{   
    // signed and unsigned ==> type modifiers 

    // unsigned int number ==> positive number  
    // unsigned ==> there will be no msb 
    /*
            short 
            long 
            signed 
            unsigned 
    */    


     int  number= 2147483647   ; // by default it is considered as signed 
    // signed int number = 65 
    // we can store positive as well as negative value 
    // 1 byte == 8 bit 
    // 4 byte = 32 bit
    // 32 bit = binary of 65 is stored   
    printf("%lld\n",number); 
    printf("%d\n",INT_MAX);// max range==> 2147483647 
    printf("%d\n",INT_MIN);// min range==> -2147483648 
    /*
            int ==> 4 byte ==> 32 bit 
            32 bit ==> ( 1 bit sign)
            (2 to the power 32 -1 ) - 1
                2,147,483,648 - 1 
                2,147,483,647 ==> max range

                 -2,147,483,648 ==> min range
    */




    return 0; 
}


/*
    Number system ( binary ,decimal , hex, octal )
    1s compliment 
    2s compliment  
*/