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
    int *ptr = arr; // 4 bytes
    //int *ptr = &arr[0]; 
    // ptr is ponting to the base address of array   
  
    //printf("%u ",ptr);  // base address  
    //printf("%u ",arr);  // base address 

     //printf("%u ",ptr);  // base address 
     //           100 
     //printf("%u ",ptr+1);// address 
     /*     
            100 + 1 
            100 + 1 * 4 
            104 
     */
     //printf("%u ",ptr+2);     
     /*
            100 + 2 
            100 + 2 * 4 
            100 + 8 
            108 
     */

    //printf("%u ",*ptr);
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            1 

    */
   //printf("%u ",*(ptr+1));
   /*
            *(ptr+1)
            *(100+1)
            *(100+1*4)
            *(104)
            2 
   */
  //printf("%u ",*(ptr+2));
  /*
            *(100+2)
            *(100+2*4)
            *(108)
            3 

  */
    //    printf("%d ",ptr[0]);  // 1 
    //    printf("%d ",*(ptr+0));  // 1 

    //    printf("%d",ptr[1]); // 2 
    //    printf("%d",*(ptr+1)); // 2 

        printf("%d",*ptr+300);
        /*      
                *ptr->valueat(100)-->1 
                1 + 300 
                301 
        */
    return 0;
}
/*

        ptr+1 --> 100 + 1 --> 100+1*4 -->104
        *(ptr+1)--> *(104) ---> 2 
*/