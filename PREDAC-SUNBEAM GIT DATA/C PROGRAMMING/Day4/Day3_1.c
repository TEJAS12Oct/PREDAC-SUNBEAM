#include<stdio.h> 

int main()
{
    int number; // variable declaration
    int roll = 424; // var declaration + initialization       
    double basic_salary=2000.00,total_salary=25000.00;  
    // can declare multiple variable in single line 
    char ch = 'A'; // variable decl + init 
     
    // \n ==> new line ( escape sequence) 
    printf("Variable and datatypes\n");
    number = 12; // assignment   
    printf("number = %d\n",number);//12
    //      number = 12
    number = 17; // assignment 
    printf("Roll = %d\n",roll); // 424  
    //      Roll = 424
    printf("number -----> %d\n",number);//17 
    //      number ------>17  
    printf("%lf %lf\n",basic_salary,total_salary);

    printf("roll = %d number = %d total_salary = %lf\n",roll,number,total_salary);  
    //      roll = 424 number = 17 total_salary =20000.00

    printf("character = %c",ch);
    //      character = A 

    return 0; 
}