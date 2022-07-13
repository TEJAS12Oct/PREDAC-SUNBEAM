#include<stdio.h> 
//int arr[3][3];     
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; // 9 * 4 --> 36
   
    /*
        arr 
               [0]  [1]  [2]
     [0]        1    2    3  
     100        100  104  108 

     [1]        4    5    6 
     112       112  116  120 

     [2]        7    8    9 
     124       124  128  132 
    */

     int row,col; 

     printf("\n"); 
     for(row=0;row<3;row++)
     {
            for(col=0;col<3;col++)
            {
                    printf("%u ",&arr[row][col]);   
            }   
            printf("\n"); 
     }   
     printf("\n"); 

     printf("%u\n",*arr); // base address

     printf("%u\n",*arr+1);
     printf("%u\n",*arr+2);     

     printf("%d\n",**arr); // 1 
     printf("%d\n",*(*arr+1));//2 
     printf("%d\n",*(*arr+2));//3      
      
    printf("%d\n",*(*arr+1)+100);//102 

    // arr[1][1] --> array notation 
    // *(*(arr+1)+1) --> pointer notation 
    return 0; 
}
