#include<stdio.h> 
// call by value 
int addition( int num1 , int num2)
{
    int result;  // local variable 
    result = num1 + num2; 
    return result; 

}
int main()
{

    int num1= 2; // local variable 
    int num2 =3;    
    int result; 
    
    // addition fn is called by value 
    result = addition( num1 , num2 ); // function call    
    printf("Result = %d",result); 
    return 0;
}



