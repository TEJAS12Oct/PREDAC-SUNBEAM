#include<stdio.h> 
//int addition( int num1 , int num2); // global declaration 
int addition( int  , int ); // global declaration 
// type checking 
int main()
{
    //int addition( int num1 , int num2); // local declaration 
    int num1= 2;
    int num2 =3;    
    int result; 
    
    result = addition( num1 , num2 ); // function call    
    printf("Result = %d",result); 
    return 0;
}



int addition( int num1 , int num2)// function defination 
{
    int result; 
    result = num1 + num2; 
    return result; 

}
