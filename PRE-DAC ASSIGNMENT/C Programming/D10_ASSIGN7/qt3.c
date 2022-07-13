#include<stdio.h>
void fact(int n);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    fact(num);
    return 0;
}
void fact(int n)
{
    int i =1 ;
    while( i < n )
    { 
        if(n % i == 0)
        {
            printf("%d ",i);
        }
        i++;
    }

}