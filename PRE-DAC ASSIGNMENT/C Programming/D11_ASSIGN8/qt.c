#include<stdio.h>
int flag = 0;
int calculator(int n1,int n2,char op);

int main()
{
    int n1,n2,res;
    char op;
    printf("Enter the num1: ");
    scanf("%d",&n1);
    printf("Enter the num2: ");
    scanf("%d",&n2);
    printf("Enter the operand: ");
    scanf("%*c%c",&op);
    res = calculator(n1,n2,op);
    if(flag == 0)
        printf(" %d %c %d = %d",n1,op,n2,res);
    else
        printf("Invalid Divisor");   

    return 0;
}
int calculator(int n1,int n2,char op)
{
    int res = 0;
    switch(op)
    {
        case '+':res = n1 + n2;
            break;
        case '-':res = n1 - n2;
            break;
        case '*':res = n1 * n2;
            break;
        case '/':if(n2 == 0)
                {
                    flag = 1;
                    return flag;
                }
                else
                {
                    res = n1/n2;
                }
                
            break;
        
    }
    return res;
}