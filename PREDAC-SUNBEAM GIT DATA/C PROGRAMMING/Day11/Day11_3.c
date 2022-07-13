#include<stdio.h> 
int main()
{
     int arr[5] = {1,2,3,4,5};// init-list 
     //arr++;  // base address // NOT ok 
     //100++ --> 100 = 100 + 1   
     /*
                0 to n-1 

             1     2     3     4    5    
            [0]   [1]   [2]   [3]  [4] 
            100   104   108   112  116  

     */
      //int *ptr1 = &arr[4]; //116 
      //int *ptr2 = &arr[0]; //100 
      //int result; 
      //result = ptr1 - ptr2; 
      //ptr1 – ptr2 = (ptr1 – ptr2) / scale factor of ptr1
      /*
            (116 - 100 ) / 4 
            (16) / 4 
             4   

      */ 
      //printf("%d",result);                  
        int i; 
        for(i=0;i<5;i++)
        {
            printf("%u ",&arr[i]); 
        }
        printf("\n\n%u ",&arr+1); 

        // arr+1 --> 100 --> 104 
        // &arr+1 --> 100 + 1 * 20 --> 120 

    return 0;
}
/*

        ptr+1 --> 100 + 1 --> 100+1*4 -->104
        *(ptr+1)--> *(104) ---> 2 
*/