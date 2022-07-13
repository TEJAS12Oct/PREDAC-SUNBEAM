#include<stdio.h> 

#define SIZE 10

typedef int bool_t;  
int comparison; 

#define true 1
#define false 0 

#define SWAP(a,b) { int temp = a;a=b;b=temp;}


typedef int bool_t;
void display_array_elements(int arr[]); 
void insertion_sort(int arr[]); 
int main()
{
    int key; 
    int arr[SIZE] = {60,40,50,20,100,90,10,70,80,30};
      //int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};
    
    //int arr[SIZE] = {30,20,60,50,10,40};
    //int arr[SIZE] = {10,20,30,40,50,60};

    printf("Before sort \n");     
    
    display_array_elements(arr); 

    // step 1 : // accept the key from the user 

   //bubble_sort(arr); 

    insertion_sort(arr); 

    printf("After sort \n");     
    
    display_array_elements(arr); 
 

   
    return 0; 
}

void insertion_sort(int arr[])
{
    int i; 
    int interations=0; 
    int while_cnt=0; 
    for(i=1 ; i < SIZE ; i++)
    {
            interations++;  
            int j = i - 1; 
            int key = arr[i];  

        while( j>=0 && key< arr[j] )
        {
               while_cnt++; 
               arr[j+1] = arr[j]; 
               // shift ele to right by 1 
               j--;  
        }
 // insert the key into left hand 
 // i.e into array at appro postion    
        arr[j+1] = key; 
    }    

printf("No of iterations are %d\n",interations);
printf("No of control comes inside while loop while_cnt %d\n",while_cnt);

}




void display_array_elements(int arr[])
{
        int index; 
        printf("Array elements are : "); 
        for(index=0;index < SIZE ; index++)
        {
            printf("%4d",arr[index]); 
        }
        printf("\n"); 
}




