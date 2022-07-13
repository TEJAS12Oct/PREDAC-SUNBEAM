#include<stdio.h>
int main()
{
    int n1,n2;
    int sum,diff,pro;

    printf("enter two number");
    scanf("%d%d",&n1,&n2);
     
    sum=n1+n2;
    diff=n1-n2;
    pro=n1*n2;
    printf("sum=%d diff=%d pro=%d",sum,diff,pro);
    return 0; 
}