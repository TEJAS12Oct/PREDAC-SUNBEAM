#include<stdio.h> 
void fun( void ); 
int main()
{
        fun();
        fun(); 
        fun(); 
        return 0; 
}

void fun( void )
{
        static int num = 1;
        // data section  
        num++; 
        printf("%d\n",num);  // 2 3 4 
}
/*
        num1 

     fun()  fun()  fun()

*/


// void fun( void ); 
// int main()
// {
//         fun();
//         fun(); 
//         fun(); 
// }

// void fun( void )
// {
//         int num = 1;
//         // data section  
//         num++; 
//         printf("%d\n",num);  // 2 2 2 
// }

/*
        fun() ==> num1 
        fun() ==> num1
        fun() ==> num1  
*/