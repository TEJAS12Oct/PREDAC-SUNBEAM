#include<stdio.h>
void swap(int *num1,int *num2);

int main()
{
    int num1,num2,res;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num1: ");
    scanf("%d",&num2);

    printf("Num1 :%d Num2 :%d\n",num1,num2);
    swap(&num1,&num2);
    printf("Num1 :%d Num2 :%d",num1,num2);

    return 0;
}
void swap(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}