#include<stdio.h>
int main()
{

    int year,flag,days,month;
    
    printf("year:");
    scanf("%d",&year);

    printf("month:");
    scanf("%d",&month);
    
    printf("days:");
    scanf("%d",&days);

    if( (year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
	{
		flag = 1;
		printf("%d These is Leap year\n",year);
	}
	   
    else
	{
		printf("Not a leap year\nNumber of days 365\n");
		flag = 0;		
	}

       switch(month)
    {
	    case 1 :printf("Month is Jan\nDays : 31\n");
		break;
	    
        case 2 :if(flag == 1)
			printf("Month Is Feb\nDays 29");
		
        else
        {
			printf("Month Is Feb\nDays 28");
        }
        break;
	    
        case 3 :printf("Month is March\nDays : 31");
		break;
	    
        case 4 :printf("Month is April\nDays : 30");
		break;

        case 5 :printf("Month is May\nDays : 31");
		break;

        case 6 :printf("Month is June\nDays : 30");
		break;

        case 7 :printf("Month is July\nDays : 31");
		break;

        case 8 :printf("Month is August\nDays : 31");
		break;

        case 9 :printf("Month is september\nDays : 30");
		break;

        case 10 :printf("Month is October\nDays : 31");
		break;

        case 11 :printf("Month is November\nDays : 30");
		break;

        case 12 :printf("Month is December\nDays : 31");
		break;

	    default : printf("Invalid Month :");

    }

    return 0;
}