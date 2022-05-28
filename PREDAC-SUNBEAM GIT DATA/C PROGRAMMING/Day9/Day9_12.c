#include<stdio.h> 
void fun1(); 
void fun2(); 
extern int num;  // declaration 
// no memory is allocated 
// we cannot store the value 
int main()
{
    //extern int num; 
    printf("%d",num);
    fun1(); 
    fun2(); 
    return 0;
}
void fun1()
{
    //extern int num; 
    printf("%d",num);
}
void fun2()
{
    //extern int num; 
    printf("%d",num);
}
int num = 100; 

