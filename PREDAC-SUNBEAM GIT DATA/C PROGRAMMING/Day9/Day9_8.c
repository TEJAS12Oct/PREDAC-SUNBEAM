#include<stdio.h> 
void sumpro(int a ,int b); 
int main()
{
        int x =10 , y = 3; 
        sumpro(x,y); 
        //printf("sum = %d prod = %d",ps,pp);     
}
void sumpro(int a ,int b)
{
        int ps; // ps is a local variable 
        int pp; // pp is a local variable 
        ps = a + b ;
        pp = a * b ;  
}

