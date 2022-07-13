#include<stdio.h> 

int main()
{
     int arr[5] = {1,2,3,4,5};// init-list 
    //  printf("%d\n",sizeof(arr)); // 5 * 4 --> 20 
    //  printf("%d\n",sizeof(arr[0])); // 4 
    //  printf("%d\n",sizeof(arr[-1])); // 4
    //  printf("%d\n",sizeof(arr[2-1])); // 4 
     /*
                0 to n-1 

             1     2     3     4    5    
            [0]   [1]   [2]   [3]  [4] 
            100   104   108   112  116  

     */

        //printf("%u\n",arr); // base address 
        //printf("%u\n",&arr); // base address
        //printf("%u\n",&arr[0]); // base address 

        int i; 
        for(i=0;i<5;i++)
        {
            printf("%u ",&arr[i]); 
        }
        printf("\n\n"); 

         //printf("%u\n",arr);    
         //printf("%u\n",arr+1); 
         /*         
                100 + 1
                100 + 1 * 4
                100 + 4 
                104   
         */
        //printf("%u\n",arr+2);
        /*
                100 + 2 * 4 
                100 + 8 
                108 

        */ 
         //printf("%u ",*arr); 
         /*
                *arr
                valueat(arr)
                valueat(100)
                1  

         */
         //printf("%d ",*(arr+1));
         /*
                *(arr+1)
                *(100+1)
                *(100+1*4)
                *(104)
                valueat(104)
                2 
         */
         //printf("%d ",*(arr+2));

         /*
                   *(100 + 2 )
                   *(100 + 2 * 4 )
                   *(100 + 8 )
                   *(108)
                      3  
         */  

          //printf("%d ",*arr+100); 
          /*
                   *arr+100
                   *(100) + 100 
                   valueat(100) + 100 
                   1 + 100 
                   101 

          */  
         //printf("%d ",*(arr+1) + 1000);

         for(i=0;i<5;i++)
        {
              //printf("%d ",i[arr]);//1 2 3 4 5  
              printf("%d ",*(i+arr));//1 2 3 4 5    
        }   

        /*
                arr[i] --> array notation 
                i[arr]

                *(arr+i) --> pointer notation 
                *(i+arr)
        */
        
        return 0; 
}
// arr[0] --> 1 
// 0[arr] --> 1
// *(arr+0) --> 1
// *(0+arr) --> 1


