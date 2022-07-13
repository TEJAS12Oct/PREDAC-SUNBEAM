#include<stdio.h>
int is_prime(int n);
void print_primes(int min,int max);

int main()
{
    int num,res,min,max;
    printf("Enter the number: ");
    scanf("%d",&num);
    res = is_prime(num);
    if(res == 0)
        printf("Not a prime number");
    else
        printf("Prime number");

    printf("\nEnter minimum and maximam value: ");
    scanf("%d%d",&min,&max);

    print_primes(min,max);
    
    return 0;
}
int is_prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;

}
void print_primes(int min,int max)
{
    while(min <= max)
    {
        if(is_prime(min))
            printf("%d ",min);
        min++ ;
    }
}