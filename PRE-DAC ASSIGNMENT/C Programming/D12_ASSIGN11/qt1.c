#include<stdio.h>
# define SIZE 5

void rev_array(int arr[]);
void print_array(int arr[]);
void accept_array(int arr[]);

int main()
{
    int arr[10];
    accept_array(arr);
    print_array(arr);
    
    printf("Reverse elements are:");
    rev_array(arr);
    print_array(arr);

    return 0;
}
void rev_array(int arr[])
{
    int i=0, j=SIZE-1, temp;
    while(i<j)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++ ;
        j-- ;
    }
    printf("\n");
}
void print_array(int arr[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("Element at index %d: ",i);
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
void accept_array(int arr[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
}
