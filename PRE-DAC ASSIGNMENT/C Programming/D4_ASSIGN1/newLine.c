#include<stdio.h> 

int main()
{
    int number; 
    int roll = 424;     
    double basic_salary=2000.00,total_salary=25000.00;  
    char ch = 'A'; 
     
    
    printf("Variable and datatypes\n");
    number = 12;    
    printf("number = %d\n",number);
    
    number = 17; 
    printf("Roll = %d\n",roll);  
    
    printf("number -----> %d\n",number);
     
    printf("%lf %lf\n",basic_salary,total_salary);

    printf("roll = %d number = %d total_salary = %lf\n",roll,number,total_salary);  
    

    printf("character = %c",ch);
    
    return 0; 
}