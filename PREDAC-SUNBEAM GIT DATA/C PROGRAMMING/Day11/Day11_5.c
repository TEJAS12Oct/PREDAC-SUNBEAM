#include<stdio.h> 
int main()
{
     int arr[5] = {1,2,3,4,5};// init-list 


     /*
                0 to n-1 

             1     2     3     4    5    
            [0]   [1]   [2]   [3]  [4] 
            100   104   108   112  116  

     */
      int *ptr = arr;
 //ptr is pointing to the base address 

     printf("%d ",*ptr); // 1      

     ptr++; // ptr = ptr + 1      

     printf("%d ",*ptr);// 2 

     ptr = ptr - 1; 

     printf("%d ",*ptr); // 1         
      
    return 0;
}
