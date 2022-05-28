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
      
      //printf("%d ",arr[0]); // 1
      //printf("%d ",0[arr]); // 1
      //printf("%d ",arr[1-1]); // arr[0]--> // 1
      //printf("%d ",arr[arr[1]]); //3 
      /*
                   arr[2]
                   3 
      */  
       //printf("%d ",++arr[0]);// arr[0] = arr[0] + 1 --> 2  
       //printf("%d ",arr[0]); // 2 
       /*
             2     2     3     4    5    
            [0]   [1]   [2]   [3]  [4] 
            100   104   108   112  116  
       */

         printf("%d",arr[-1]); 
        /*
                arr[-1]
                *(arr-1)
                *(100-1)
                *(100-1*4)
                *(100-4)
                *(96)
                Garbage 
        */
         //int *ptr = arr;  
         //printf("%d",ptr[-1]); 
         /*
                ptr[-1]
                *(ptr-1)
                *(100-1)
                *(100-1*4)
                *(100-4)
                *(96)
                Garbage 
         */
    return 0;
}
