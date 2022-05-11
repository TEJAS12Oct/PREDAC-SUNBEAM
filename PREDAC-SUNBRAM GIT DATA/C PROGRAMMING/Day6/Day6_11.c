#include<stdio.h> 
int main()
{
    
    int a,b,c; 
    printf("Enter the 3 numbers"); 
    scanf("%d%d%d",&a,&b,&c); 

    
    
    if(a<b && a<c)
    {
          printf("a : min = %d",a);   
    } 
    else
    {
           
        if(b<c)
          printf("b : min = %d",b);   
        
        else
          printf("c : min = %d",c);   
        
        
    }
    

    return 0;
}
