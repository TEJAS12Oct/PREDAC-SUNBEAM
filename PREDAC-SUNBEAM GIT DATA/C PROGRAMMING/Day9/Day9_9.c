#include<stdio.h> 
void sumpro(int a ,int b); 
int ps,pp; // Global variable 

/*
    variable declared inside the function -> local variable 
    variable declared outside the function -->global variable 
*/
/*
    global variable 
    // created when program is started-->even before main () is called 
    // created in datasection 
    // default value is 0 
    // scope --> throughout the program 
*/


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

