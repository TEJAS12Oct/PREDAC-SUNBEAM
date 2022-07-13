#include<stdio.h> 
void readArray(int arr[3][3]); 
int main()
{
    int arr[3][3]; // 1 2 3 4 5 6 7 8 9  

    readArray(arr); // base address 
    printArray(arr); // base address  
    return 0; 
}
void printArray(int arr[3][3])
{
        
        int row,col; 

        for(row=0;row<3;row++)
        {
            for(col=0;col<3;col++)
            {    
                printf("%4d",arr[row][col]); 
            }
            printf("\n"); 
        }
}
void readArray(int arr[3][3])
{
        //printf("%d\n ",sizeof(arr)); //4 / 8  
        int row,col; 

        for(row=0;row<3;row++)
        {
            for(col=0;col<3;col++)
            {    
                scanf("%d",&arr[row][col]); 
            }
        }
}