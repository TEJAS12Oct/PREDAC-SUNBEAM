#include<stdio.h> 
void readArray(int arr[5]); 
//void readArray(int *ptr); 
void printArray(int arr[5]); 
int main()
{
    int arr[5];
    // 1 2 3 4 5 
    printf("\n size = %d\n\n",sizeof(arr)); // 20  
    readArray(arr);  // pass by address 
    /*
            arr --> base address  
    */  
    // int i; 
    // for(i=0;i<5;i++)
    // {
    //     printf("%d ",arr[i]); 
    // } 
     
    printArray(arr);  // pass by address 
    // arr --> base address  

}
void printArray(int arr[5]) // array notation 
{
        printf("\n size = %d\n\n",sizeof(arr)); // 4 
        // ptr --> 4 
        // ptr --> 8 
        int i; 
        for(i=0;i<5;i++)
        {
            printf("%d ",arr[i]); 
        } 

}
void readArray(int arr[5]) // array notation 
//void readArray(int *ptr) // pointer notation 
{
        //printf("\n size = %d\n\n",sizeof(arr)); // 4 
        int i; 
        for(i=0;i<5;i++)
        {
            scanf("%d",&arr[i]); // 1 2 3 4 5   
            //scanf("%d",&ptr[i]); // 1 2 3 4 5   
        }
}