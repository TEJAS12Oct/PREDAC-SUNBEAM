#include<stdio.h> 
int myfact(int num); 
int main()
{
    
    int num = 3; 
    int result; 
    result = myfact(5);
    printf("result = %d",result);  

    return 0;
}
//              3 
int myfact(int num)
{
    int result=1; 
    int i; 
    for(i=1;i<=num;i++)
    {
        result = result * i; //6
    }
    return result; 
}
// main --> myfact()
// myfact() ==> destroy 
// main () --> destroy 