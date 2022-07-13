#include<stdio.h>
int main()
{
    int n1 = 1 ,n2 = 1 , res , i = 2,num; 
    printf("Enter the Nth term :");
    scanf("%d",&num);

    printf("%d %d",n1,n2);
    5 < 6;
    while( i < num )
	{
    res = n1 + n2;
	printf("%d ",res); 
	n1 = n2;
	n2 = res;
	i++;
	}
    return 0;
}