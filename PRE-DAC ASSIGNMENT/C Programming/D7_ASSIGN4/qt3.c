#include<stdio.h>
int main()
{
    
    int quantity;
    float discount ,price ,expense;
    printf("enter the quantity :");
    scanf("%d",&quantity);
    price = 5;

    if( quantity >= 30 )
	{
		discount = 10;
		expense = (price * quantity) - (price * quantity * discount / 100);
		printf(" Expence is :%f ",expense);
	}

    else if(quantity >= 50)
	{
		discount = 15;
		expense = (price * quantity) - (price * quantity * discount / 100);
		printf(" Expence is :%f ",expense);
	}
    else
	{
		expense = (price * quantity);
		printf(" Expence is :%f ",expense);
	}
    return 0;

} 
