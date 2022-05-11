#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the point of x");
    scanf("%d",&x);
    printf("Enter the point of y");
    scanf("%d",&y);

    if( x>0 && y>0 )
    printf(" x and y lies in 1st  quadrent");

    else if( x<0 && y==0 )
    printf(" x and y lies in 1st  quadrent");

    else if( x<0 && y>0 )
    printf(" x and y lies in 2nd  quadrent");

    else if( x<0 && y<0 )
    printf(" x and y lies in 3rd  quadrent");

    else if( x>0 && y<0 )
    printf(" x and y lies in 4th  quadrent");

    else
    {
        printf("x and y in origin");
    }
    
    
    
    return 0;
}