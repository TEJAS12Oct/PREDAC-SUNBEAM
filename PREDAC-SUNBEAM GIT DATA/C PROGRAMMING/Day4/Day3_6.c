#include<stdio.h> 
#include<limits.h> 

int main()
{
    short int num; // by default signed short int num 
    //printf("%d",sizeof(num));  // 2 bytes
    printf("%hd ",SHRT_MAX);
    printf("%hd ",SHRT_MIN);
    
    /*
            2 bytes 
            16 bits ( 1 bit sign)
            ( 2 to the power 16 -1 ) - 1 
            ( 2 to the power 15 ) - 1 
            32,768 - 1
            32,767 ==> max range   
            -32,768 ==> min range   



    */ 
   /*
            unsigned short int num ==> 2  
            16 bits 
            ( 2 to the power 16  ) - 1 
             max range unsigned short int - 65,535
             min - 0 
            
            
   */
  //printf("%d ",USHRT_MAX);

    unsigned short int num = 100; 
}

/*      
        int num; 


        what if i want to store 100
        100 --> +ve 
        100 --> int 
        unsigned short  int num 

        int num;  // 4 bytes 
        unsigned int num; // 4 bytes 
        short int num; // 2 bytes 
        unsigned short int num; // 2 bytes 
        long int num; // 4  bytes 
        long long int num;  // 8 bytes 

        
*/