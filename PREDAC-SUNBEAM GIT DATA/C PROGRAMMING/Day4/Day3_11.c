#include<stdio.h> 

int main()
{
    //unsigned char ch = 500; // 0 to 255 
    /*
            char --> 1 byte 
            1 byte --> 8 bits 
            2 to the power 8 --> 256 
            500 - 256 --> 244 ( yes it is in range of uncsigned char ) 

    */
   unsigned char ch = 900; // 0 to 255
   /*
            900 - 256 --> 644 ( no not in range )
            644 - 256 --> 388 ( no not in range)
            388 - 256 -->132 ( yes it is int range)  

   */ 
   printf("%d",ch);// 132 
    return 0; 

}