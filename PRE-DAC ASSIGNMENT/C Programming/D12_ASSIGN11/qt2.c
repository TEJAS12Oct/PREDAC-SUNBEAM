#include<stdio.h>
# define SIZE 5

void max_array(int arr[]);
void min_array(int arr[]);
void accept_array(int arr[]);
void print_array(int arr[]);

int main()
{
    int arr[10];
    accept_array(arr);
    print_array(arr);
    min_array(arr);
    max_array(arr);

    return 0;
}
void max_array(int arr[])
{
    int max,i=0;
    max = arr[i];
    for(i=1;i<SIZE;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    printf("\nMaximum element of array is: %d",max);
}
void min_array(int arr[])
{
    int min,i=0;
    min = arr[i];
    for(i=1;i<SIZE;i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }
    printf("Minimum element of array is: %d",min);
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