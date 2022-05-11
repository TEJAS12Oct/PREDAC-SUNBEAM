#include<stdio.h>
int main()
{
    
    int num,sum = 0,rev=0,k,rem,choice,arm;
    printf("Enter the Number :");
	scanf("%d",&num);
    

    do{
	    printf("1.sum of digits of integer\n 2.Reverse the number\n 3.Check numeric palindrome or not\n 4. Check whether given number is numeric ARMSTRONG or not\n");

        printf("enter the choice\n:");
		scanf("%d",&choice);
        switch(choice)
	{
		case 1:printf("Sum of Digits : \n");
		       sum = 0;
		       while(num > 0)
		       {
				rem = num % 10;
				sum = sum + rem;
				num = num / 10; 
		       }
		       printf("Sum of Digits = %d ",sum);	
		       break;
		case 2 :printf("Reverse the number:\n");
			rev = 0;
			rem = 0;
			while(num > 0)
			{
				rem = num % 10;
				rev = rev * 10 + rem;
				num = num / 10;
			}
		       printf("Rev Num is = %d ",rev);	
		       break;
		case 3 :printf("Check numeric palindrome or not:\n");
			k = num;
			rev = 0;
			rem = 0;
			while(num != 0)
			{
				rem = num % 10;
				rev = rev * 10 + rem;
				num = num / 10;
			}
			if(k == rev)
				printf("Number Is Palindrome : %d",rev);
			else
				printf("Number Is not Palindrome ");
			break;

		case 4 :printf("Check ARMSTRONG number;\n ");
			arm = 0;
			rem = 0;
			k = num;
			while(num > 0)
			{
				rem = num % 10;
				arm = arm + (rem * rem * rem);
				num = num / 10;
			}
			if(k == arm )
				printf("Number is ARMSTRONG :%d",arm);
			else
				printf("Number is Not AREMSTRONG");
			break;
			
		default :printf("Invalid Choice");
      }

    }while(choice != 0 );

    return 0;
}