#include<stdio.h>
void print(int num,char ch);

int main()
{
    int num;
    char ch;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the character: ");
    scanf("%*c%c",&ch);
    print(num,ch);

    return 0;
}
void print(int num,char ch)
{
    int i;
    for(i=0;i<num;i++)
        printf("%c",ch);
}