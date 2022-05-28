#include<stdio.h> 
//int  arr[5]; 
int main()
{
    //int num1,num2,num3,num4,num5;

        int  arr[5]={1,2,3,4,5}; // init list 
       //int  arr[5]={1,2,3}; // partial init
       //int  arr[5]={1};
       //int  arr[5];  // Garbage 
       //int  arr[]; // NOT OK 
       // int  arr[ ]={1,2,3,4,5}; 
     // arr is the name of the array     
     // 5 --> size
     // [ ] --> subscript operator  

    // printf("%d\n",arr[0]); // 1 // array notation
    // printf("%d\n",arr[1]); // 2 
    // printf("%d\n",arr[2]);//  3 
    // printf("%d\n",arr[3]);//  4 
    // printf("%d\n",arr[4]);//  5  
    // //printf("%d\n",arr[5]);

    //   int i; 
    //   for(i=0;i<5;i++)
    //   {
    //       printf("%d ",arr[i]); 
    //   }

// name of array represents the base address / 0th index address 
    
      int i; 
      for(i=0;i<5;i++)
      {
          printf("%u ",&arr[i]); 
          // &arr[0]
          // &arr[1]
          // &arr[2]
      }
     printf("\n"); 
     printf("Name of array %u",arr); // base address  

    return 0; 
}