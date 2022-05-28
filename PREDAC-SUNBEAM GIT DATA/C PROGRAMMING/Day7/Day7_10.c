#include<stdio.h> 

int main()
{
    // do-while --> exit controlled loop 

    int choice;  
    do
    {   

       printf("Enter the choice"); 
       scanf("%d",&choice);   // 1

     }while (choice>=1 && choice<=10); 
     
     printf("loop exited....."); 

    return 0; 
}