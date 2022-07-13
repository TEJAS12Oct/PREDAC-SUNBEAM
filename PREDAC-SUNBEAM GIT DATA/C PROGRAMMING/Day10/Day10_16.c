#include<stdio.h> 

int main()
{
    // pointer arithmatic

    int num = 20; 
    int *ptr = &num; 

    printf("num = %d\n",num); //20
    printf("num = %d\n",*ptr); //20 

      ptr = ptr + 1; // ptr + 4  * 1 --> ptr + 4  
       
     //ptr = ptr * 1;
     //ptr = ptr / 1;   

     printf("*ptr = %d\n",*ptr); //Garbage 

    ptr--; // ptr = ptr - 1 

    printf("num = %d\n",num); //20
    printf("num = %d\n",*ptr); //20 


    return 0; 
}

// 1000m + 1km --> 2000  
// 1km --> 1000m 