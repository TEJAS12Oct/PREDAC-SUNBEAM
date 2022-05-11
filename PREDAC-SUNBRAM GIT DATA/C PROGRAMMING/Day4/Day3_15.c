#include<stdio.h> 

int main()
{
    int num; 
    // printf ==> string("Hello","num") / data(int,float,double,char)  

    // i want to accept the value from the user 
    // scanf( ); 

    printf("Enter the number"); 
    //      Enter the number
    
    // int ==> %d 
    scanf("%d",&num); // 10
    // dont use \n in scanf 
    // avoid giving space in scanf  

    printf("Number = %d",num); 

    return 0; 
}