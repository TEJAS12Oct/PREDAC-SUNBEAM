#include<stdio.h> 
void sumpro(int a ,int b); 
/*
    variable declared inside the function -> local variable 
    variable declared outside the function -->global variable 
*/
extern int ps,pp; // this is just a intimation to compiler 
int main()
{
        int x =10 , y = 3; 
        sumpro(x,y); 
        printf("sum = %d prod = %d",ps,pp);  
        return 0;    
}

void sumpro(int a ,int b)
{

         // a and b are local 
         // when sumpro is called a and b gets memory 
        ps = a + b ; 
        pp = a * b ;  
}
int ps,pp; // Global variable 
