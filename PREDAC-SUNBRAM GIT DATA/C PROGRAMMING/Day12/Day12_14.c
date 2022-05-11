#include<stdio.h>
#include"Day12_14.h" 
#include<limits.h> 


int main()
{
    double rad,area; 
    printf("Enter the radius");
    scanf("%lf",&rad); 

    area = PI * rad * rad; 
    printf("Area = %.2lf",area); 
    
    return 0;
}
