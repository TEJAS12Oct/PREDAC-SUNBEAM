#include<stdio.h> 
int main()
{
    //num1 num2 num3  
    int num1 = 100; 
    int num2 = 200; 
    int num3 = 5000; 

    if(num1>num2) //100 > 200 
    {
            if(num1>num3)
            {
                 printf("max : num1=%d",num1);    
            }
            else
            {
                 printf("max : num3=%d",num3);    
            }
            
    }
    else
    {
            if(num2>num3)//200 > 3000 
            {
                printf("max : num2=%d",num2);    
            } 
            else
            {
                printf("max : num3=%d",num3);    
            }
               
    }
    


    return 0;
}
