#include<stdio.h> 
//register int m = 1000; // NOT ALLOWED  
int main()
{
    
    int x; // local variable --> stack 
    register int c;  // cpu register 
    
    printf("\n%d",c); // Garbage 
    {
        register int c = 10; 
        printf("\n %d",c);// 10 
        {
            register int c = 100; 
            printf("\n %d",c);// 10   
        } 
    }
     printf("\n %u",&x); // local variable --> address   
     //printf("%u",&c); //NOT OK  address of register  
    // & --> address-of operator  
    

    // storage --> cpu register ( fast accessible )

    //register static int a; // NOT OK   
    
    return 0;
}

