#include<stdio.h>
int main()

{
    int n1,n2,num;
    printf("Enter the num:");
    scanf("%d",&num);

    n1= num % 4;
    n2= num / 4;
    
    printf("%d\n%d\n",n1,n2);
    return 0;
}