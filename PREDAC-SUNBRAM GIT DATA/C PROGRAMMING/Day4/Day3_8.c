#include<stdio.h> 
#include<limits.h> 
int main()
{
    //char ch = 'A';  // signed 
    // char ch = 65
    //printf("%c",ch);//A// character representation    
     //printf("%d",ch);// 65 
     // ch ==> 'A' 
     // 'A' ==> %d 
     // decimal representation of 'A' ==> ASCII value of 'A' 

    /*
            signed char ==> 1 byte 
            1 byte ==> 8 bit 
            (2 to power 8 - 1 ) -1 
            (2 to power 7 ) - 1 
            128 - 1 
             127 --> max range of signed character 
            -128
            max range of char ==> 127  
            min range of char ==> -128 
            // signed         

    */
   /*   
                unsigned char ch; 
                ( 2 to power  8) - 1 
                256 - 1 
                255 --> max range 
                0   --> min range   
   */
               printf("%d\n",SCHAR_MAX); // max 
               printf("%d\n",SCHAR_MIN); // min

               printf("%d\n",UCHAR_MAX); // max of unsigned char  


}