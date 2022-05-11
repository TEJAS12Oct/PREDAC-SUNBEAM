#include<stdio.h>
int main()
{
    int num,reverse=0,reminder,k;
    printf("enter the number");
    scanf("%d%d%d%d",&num,&reverse,&reminder,&k);

    k=num;
    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;

    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;

    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;

    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;

    reminder=num%10;
    reverse=reverse*10+reminder;
    num=num/10;

    reverse = num%10;
    reverse= reverse*10+reminder;

    if(k == reverse)
        printf("number is palindrome");

        else
        {
            printf("number is not palindrome");

        }
    
    return 0;



}