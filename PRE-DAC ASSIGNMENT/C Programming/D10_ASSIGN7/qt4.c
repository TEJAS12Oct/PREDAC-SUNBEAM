#include<stdio.h>
int power(int base , int index);
int main(void)
{
    int base,index ,res;
    printf("Enter Base : ");
    scanf("%d",&base);
     printf("Enter Index : ");
    scanf("%d",&index);
    res = power(base,index);
    printf("%d ^ %d = %d ",base,index,res);

    return 0;
}

int power(int base , int index)
{
    int j ,pow = 1;
    for ( j = 1; j <= index; j++)  
    {   //    8      2
        pow = pow * base;
    }
    
    return pow;

}