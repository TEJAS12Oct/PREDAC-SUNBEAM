#include<stdio.h>
int calc(int num1,int num2 , char op);

int main()
{
    int n1,n2,res;
    char op;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("Enter operand:");
    scanf("%*c%c",&op);
    res = calc(n1,n2,op);
    if(res == 0)
        printf("Invalid Divisor");
    else
        printf(" %d %c %d = %d",n1,op,n2,res);   

    
    return 0 ;
}
int calc(int num1,int num2 , char op)
{
    int res;
    switch (op)
    {
    case '+': res = num1 + num2 ;
             break;
    case '-': res = num1 - num2 ;
             break;
    case '*':res = num1 * num2 ;
             break;
    case '/':if(num2 == 0)
            {
                
                return 0;
            }
             else
                res = num1 / num2;   
             break;         
    
    default:printf("Invalid Opeator :");
            break;
    }

    return res;
}