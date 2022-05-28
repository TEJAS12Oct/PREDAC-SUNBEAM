#include<stdio.h> 
void fun( ); 
void display(); 
void print(); 
int main()
{
        //fun( ); // fn call 
        //display( ); // fn call 
        //print ( );  // fn call 
         
         printf("main is calling\n");
         fun( ); // fn call 
         printf("back to main\n"); 
    
        return 0; 
}   

void fun( )
{
    printf("void fun( )\n"); 
    display( ); //fn call -->  calling function --> main( )
}

void display()
{
    printf("void display()\n"); 
    print( ); //fn call -->  calling function --> fun( )     
}

void print()
{
    printf("void print()\n"); // calling fn --> display( ); 
}

// main --> fun ( ) --> display( ) --> print( )
// main<---fun ( )<--display( )<--print( )                         