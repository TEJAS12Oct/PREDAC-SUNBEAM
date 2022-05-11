#include<stdio.h> 
int main()
{
    
    //printf("%d\n",10&5);// Bitwise AND  
    //printf("%d\n",10|5);// Bitwise AND 
    //printf("%d\n",10^5);// Bitwise XOR 

        int num = 10; 
        printf("%d",~num); // -(n+1)-> // -(10+1)--> -11   
        /*
               1. binary of 10 

               0000 1010  ( binary of 10 )

                 inverting the bits    

               1111 0101 --> O/p ( bitwise ~)
                 ( negative)

               1111 0101
                 2s compliment 

               1s Compliment --> 0000 1010 

               2s Compliment --> 
                    0000 1010 
                            1
                    ----------
                    0000 1011 
                    ( 11 )--> -11             



        */

    return 0;
}
