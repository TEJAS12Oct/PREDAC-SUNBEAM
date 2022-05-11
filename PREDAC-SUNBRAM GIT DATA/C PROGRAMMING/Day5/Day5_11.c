#include<stdio.h> 

int main()
{
    // , --> comma operator 

    //int a=1,2,3; // NOT OK 

     int a;  // variable decln 
     //a = 1;  // assignment 
     //a = 1,2;
     //a = 1,2,3;   
     //a = (1,2,3); 
       a = ( (1,2),3); 
       //  ( 2,3) 
       //    3  
     printf("a = %d",a); // 1   

    return 0; 
}