#include<stdio.h> 

#define SIZE 10

int comparison; 

#define true 1
#define false 0 
typedef int bool_t;
void display_array_elements(int arr[]); 
bool_t linear_search(int arr[], int key); 
bool_t binary_search(int arr[], int key); 
int main()
{
    int key; 
    //int arr[SIZE] = {60,40,50,20,100,90,10,70,80,30};
      int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};
    display_array_elements(arr); 

    // step 1 : // accept the key from the user 

    printf("Enter the key ");
    scanf("%d",&key); 


    //if(linear_search (arr,key))
     
    if(binary_search (arr,key))
     printf("%d is found in array, no of comparison =%d\n",key,comparison); 
    else 
     printf("%d is not found in array, no of comparison =%d\n",key,comparison);    
    return 0; 
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

bool_t binary_search(int arr[], int key)
{
        int left = 0; 
        int right = SIZE - 1;  
        comparison = 0; 

        //if(left>right)// subarray invalid 
        while(left<=right)
        {

            //step2 = calculate the mid pos 
            int mid = (left + right) / 2; 

            //step3 = Compare with the mid 
            comparison++;  
            if(key == arr[mid])//key compared with mid pos ele --> return true 
                return true;

            //step4 :if ele do not matches with ele at mid => go to next iteration 
            if(key < arr[mid]) //go search key  in left subarray 
                right = mid - 1; 
            else // go search key  in right subarray 
                left  = mid + 1;  
        } 
        // repeat step2 step3 step4 till key is not found or subarray is invalid 

        return false; // if key is not found 







}










bool_t linear_search(int arr[], int key)
{
        comparison = 0; 
        int index; 

        for(index=0;index < SIZE ; index++)
        {
            comparison++; 
            //compare the value of key with each array elements  
            if(key == arr[index])
                  return true;    
        }
// if key not matches with any element  of the array 
        return false;  


}
