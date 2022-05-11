#include<stdio.h> 

int main()
{
    char ch = 'A';    
    // for each character there is ASCII value 
    // for A ==> 65 
    // char ch = 65 
    // binary of 65 is getting stored in 1 byte (sizeof char ==>1  ) 
    // by default it is signed 
    // signed char ch 
    // character are internally integral values 
    printf("%d",sizeof(ch)); // 1 byte
    //printf("%d",sizeof(char)); //1 byte   
    return 0; 
}

// A ==> Input ==> machine 
// char ch = 'A' // Ascii value of A
// char ch = 'B' // Ascii value of B 
// char ch = 'c' // Ascii value of C
// char ch = 'a' // Ascii value of a