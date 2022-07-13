#include<stdio.h> 

// maximum of two numbers

int main() 
{
    int num1,num2; 
    printf("Enter the num1 and num2"); 
    scanf("%d%d",&num1,&num2); 

    // > --> relational operator 

    // num1 = 10; 
    // num2 = 20; 
    // if(num1>num2)// 30>20--> T --> 1  
    // {
    //     printf("max = %d",num1); 
    // }
    // else
    // {
    //     printf("max = %d",num2); 
    // }
    if(num1>num2)// 30>20--> T --> 1  
      printf("max = %d",num1); 
    else
      printf("max = %d",num2); 
     
    
    return 0; 

}