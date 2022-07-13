#include<stdio.h>
int divide(int num1,int num2,int *qut,int *rem);

int main()
{
    int num1,num2,qut,rem,res;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    res = divide(num1,num2,&qut,&rem);
    if(res == 0)
        printf("\nInvalid divisor");
    else
    {
        printf("\nquotient = %d remainder = %d",qut,rem);
    }
    

    return 0;
}
int divide(int num1,int num2,int *qut,int *rem)
{
    if(num2 == 0)
    {
        return 0;
    }
    else
    {
        *qut = num1/num2;
        *rem = num1%num2;
    }
    return 1;

}