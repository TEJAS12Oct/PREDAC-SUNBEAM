#include<stdio.h>
int main()
{
    
    int num,a,b,c,k,sum;
    printf(" Enter three digit num");
    scanf("%d",&num);
    k=num;
    a= num/100;
    num = num%100;
    b = num/10;
    num = num%10;
    c=num;
    
    sum = a+b+c;
    printf("a=%d+ b=%d + c=%d =%d",a,b,c,sum);
    
    return 0;
}