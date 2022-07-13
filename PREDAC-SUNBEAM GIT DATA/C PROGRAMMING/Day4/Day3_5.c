#include<stdio.h> 
#include<limits.h> 

int main()
{
    //unsigned int num;// if i want to store only +ve value 
    //num = 4294967295;// assignment    
    
    //printf("%u\n",num); 
    //printf("%u\n",UINT_MAX); // UINT ==> unsigned int 
    // 4294967295 ==> max range of unsigned int 
    // if my number is +ve and my value is <= 4294967295
    // unsigned ==> type modifier  
    /*
            int ==> 4 bytes
            4 bytes ==> 32 bits 
            32 bits ( no sign bit )
            (2 to the power 32 ) - 1
            4,294,967,296 - 1 
            4,294,967,295 
    */
    
    printf("sizeof(long int)= %d\n",sizeof(long int));
    printf("sizeof(long long int)= %d\n",sizeof(long long int));
    printf("sizeof(short int )= %d\n",sizeof(short int ));
    printf("sizeof(int) = %d\n",sizeof(int));

    return 0; 
}