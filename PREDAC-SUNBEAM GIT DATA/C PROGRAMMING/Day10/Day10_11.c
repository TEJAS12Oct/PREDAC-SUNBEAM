#include<stdio.h> 
int main()
{
    
    int num = 10; 
    int *ptr = &num; 

    printf("num = %d\n",num); // 10 
    printf("*ptr = %d\n",*ptr);// 10 

    
    char ch = 'A'; 
    char *cptr = &ch;
    printf("ch = %c\n",ch); //A
    printf("*cptr = %c\n",*cptr);//A



    return 0;
}
