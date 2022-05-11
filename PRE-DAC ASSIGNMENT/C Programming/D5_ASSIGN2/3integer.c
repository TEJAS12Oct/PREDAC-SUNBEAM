#include<stdio.h>
int main()
{
    int n1,n2,n3;
    float avg;
    printf("enter three numbers");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    avg=(n1+n2+n3)/3;
    printf("Avg =%f",avg);
    return 0;
}