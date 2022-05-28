#include<stdio.h> 

double addition(double x , double y ); 
void multiplication(double a , double b); 
int division(int num , int den); 
void substract( void ); 
int main()
{
    int num,den; 
    int result; 
    double num1 = 12.00, num2=4.00, res; 
    res = addition(num1,num2);  
    //             12.00 4.00 
    printf("add = %lf\n",res); 

    multiplication(2.3,4.2);   

    printf("\n Enter the num and den");
    scanf("%d%d",&num,&den);// 4 2  
    
    result = division(num,den); // 4 2  
    printf("result = %d\n",result); 

    substract( );  

    return 0;
}
// main --> calling function 


void substract( void )
{
    int p,q,r; 
    printf("\n Enter the 2 numbers");
    scanf("%d%d",&p,&q);
    r = p - q; 
    printf("Sub = %d",r);  
} 


int division(int num , int den)
{       
        int result; 
        result = num / den;
        return result;    
}


// void return-type indicates function is not returning any value 
void multiplication(double a , double b)
{
        double  c;
        c = a * b; // 2.3 * 4.2 
        printf("mult = %lf",c);
 //printing the result in the function          
} 

double addition(double x , double y )
{
        double res; 
        res = x + y; 
        return res;  
}
