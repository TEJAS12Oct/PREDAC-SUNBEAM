#include<stdio.h>
int num = 1000;   // data section 
void fun1(); 
void fun2(); 
int main()
{   

    fun1( ); 
    fun2( );
    printf("\n %d",num);  
    
    return 0;
}
void fun1()
{
        int num = 10;
        num = num + 100;
        printf("\n %d",num);  
}
void fun2()
{

        num = num + 100; 
}






// #include<stdio.h>
// int num = 1000;   // data section 
// void fun(); 
// int main()
// {   
//     //int num = 5000; 
//     printf("num= %d",num);  // 1000 
//     fun( ); 
//     return 0;
// }
// void fun()
// {
//     int num = 10;  // stack section   
//     printf("num= %d",num); 
// }
