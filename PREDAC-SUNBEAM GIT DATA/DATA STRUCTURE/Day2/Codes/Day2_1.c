#include<stdio.h> 

#define SIZE 6

typedef int bool_t;  
int comparison; 

#define true 1
#define false 0 

#define SWAP(a,b) { int temp = a;a=b;b=temp;}


typedef int bool_t;
void display_array_elements(int arr[]); 
void selection_sort(int arr[]); 
void bubble_sort(int arr[]); 
int main()
{
    int key; 
    //int arr[SIZE] = {60,40,50,20,100,90,10,70,80,30};
      //int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};
    
    //int arr[SIZE] = {30,20,60,50,10,40};
    int arr[SIZE] = {10,20,30,40,50,60};

    printf("Before sort \n");     
    
    display_array_elements(arr); 

    // step 1 : // accept the key from the user 

   bubble_sort(arr); 

    printf("After sort \n");     
    
    display_array_elements(arr); 
 

   
    return 0; 
}
void bubble_sort(int arr[])
{
        int it = 0; 
        int pos = 0; 
        int comparisons=0; 
        int iterations =0;
        bool_t flag = true;  

        // outer loop is for number of iteration 
        for(it=0 ; it < SIZE - 1 && flag==true; it++)
        {
                flag = false; 
                iterations++;  
                for(pos=0;pos<SIZE-it-1;pos++)
                {
                    
                    comparisons++;   
                    if(arr[pos] > arr[pos+1])
                    {
                          flag = true;   
                          SWAP(arr[pos],arr[pos+1]);   
                    }
                }


        }

     printf("no of iterations are %d\n",iterations);
     printf("no of comparisons are %d\n",comparisons);     







}

// void bubble_sort(int arr[])
// {
//         int it = 0; 
//         int pos = 0; 
//         int comparisons=0; 
//         int iterations =0;

//         // outer loop is for number of iteration 
//         for(it=0 ; it < SIZE - 1; it++)
//         {
//                 iterations++;  
//                 for(pos=0;pos<SIZE-it-1;pos++)
//                 {
//                     comparisons++;   
//                     if(arr[pos] > arr[pos+1])
//                           SWAP(arr[pos],arr[pos+1]);   
                
//                 }


//         }

//      printf("no of iterations are %d\n",iterations);
//      printf("no of comparisons are %d\n",comparisons);     







// }


void selection_sort(int arr[])
{
        int sel_pos; 
        int pos; 
        int iterations=0; 
        int comparison=0; 

        // outer loop for iteration 
        for(sel_pos = 0 ; sel_pos < SIZE - 1 ; sel_pos++ )
        {
            iterations++; 
            for(pos = sel_pos + 1 ; pos < SIZE ; pos++)
            {
                   comparison++; 
                   if(arr[sel_pos] > arr[pos])
                        SWAP(arr[sel_pos],arr[pos]);  
            }
        }

    printf("no of iterations are %d \n",iterations);
    printf("no of comparisons are %d \n",comparison); 





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




