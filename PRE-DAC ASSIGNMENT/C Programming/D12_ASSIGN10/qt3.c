#include<stdio.h>
int main()
{
    int arr[3];
    int i,total = 0;
    float avg;

    for(i=0;i<3;i++)
    {
        printf("Enter marks of subject %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("marks of subject %d: ",i+1);
        printf("%d\n",arr[i]);
    }
    for(i=0;i<3;i++)
    {
        total = total + arr[i];
    }
    printf("Total of all subject: %d\n",total);
    avg = total/3.0f;
    printf("Average of subject marks = %.2f",avg);

    return 0;
}