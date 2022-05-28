#include<stdio.h> 
int addition( int num1 , int num2); 
char fun( void  ); 
int main()
{

    char ch; 
    int num1= 2;
    int num2 =3;    
    int result; 
    
    result = addition( num1 , num2 ); 
    
    ch = fun ( );
    printf("ch = %c",ch);  

    //printf("Result = %d",result); 
    return 0;
}

char fun( void  )
{
    return 'A'; 
}


// In C programming Function defination are Global 
int addition( int num1 , int num2)
{
    int result; 
    result = num1 + num2; 
    return result; 

}



