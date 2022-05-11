#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);

    if(year % 400 == 0)
	{
        printf("This leap year and days of year 366");
    }    

    else if(year % 100 == 0)
	   {
        printf("Not a leap year ,Number of days 365");
       }     
    else if(year % 4 == 0 )
	     
        printf("This leap year and days of year 366");
        
    else
	{
        printf("Not a leap year ,Number of days 365");
    }
      
    return 0;
}