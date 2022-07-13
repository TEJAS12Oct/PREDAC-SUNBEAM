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
       printf("%d ",arr[0]);// 1    
      printf("%d ",++*ptr); // 2  
      /*
                ++ *ptr
                   valueat(100)
                   1
                   ++
                   2   
      */
       //printf("%d ",arr[0]); 

      printf("%d ",*ptr++);//2   
      /*
            * and ++ 
            *ptr --> 2    
            ++ --> ptr 
            ptr++ --> ptr =  ptr + 1 
      */
       printf("%d ",*ptr); // valueat(ptr)--> valueat(104)--> 2 

       printf("%d ",*++ptr); // 3  

        //++*ptr++;   

    return 0;
}
// arr[0] and ptr[0]