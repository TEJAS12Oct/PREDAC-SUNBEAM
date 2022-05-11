#include<stdio.h> 

int main()
{
    int rank;

    START: 
    printf("Enter the rank");
    scanf("%d",&rank);//10  

    if(rank>=1 && rank<=5)//10 
        goto END; 
    else 
       goto  START;    

    END: 
    printf("Good rank all the best...."); 
    return 0; 
}






