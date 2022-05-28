// I/P -> char 
// A/a --> Andriod 
// B/b --> Basic
// C/c --> C programming
// D/d --> Database  

#include<stdio.h> 
int main()
{
    
    char ch; 
    printf("Enter the character");
    ch = getchar(); 

     switch (ch)
     {
     case 'A':
     case 'a':
         printf("A for Android");  
         break;
    
     case 'B': case 'b': 
          printf("B for Basic"); 
          break;  
     
      case 'C':
      case 'c': 
          printf("C for C programming"); 
          break; 

      case 'D':
      case 'd': 
          printf("D for Database"); 
          break;    
     
     default:
         printf("No idea"); 
         break;
     }   


    return 0;
}
