#include<stdio.h> 

/*
    I/P -> character ( %c )
    // a --> small case 
    // A --> upper case 
    // 1 --> digit 
    // $ --> special symbol 

    A-Z --> 65 - 90 
    a-z --> 97 - 122 
    0-9 --> 48 - 57    

*/


int main()
{
    char ch; 
    printf("Enter the character"); 
    ch = getchar( ); // scans the singe character  
    //scanf("%c",&ch); 
    // putchar(); // printf("%c",ch); 

    // 0 ==> 48  
    // 
    if(ch>=97 && ch<=122)
         printf("Lower case \n");
    else
    {
          if(ch>=65 && ch<=90)
              printf("Upper case\n"); 
          else
          {
                if(ch>=48 && ch<=57)
                    printf("Digit");
                else
                    printf("Special symbol"); 
          }
              
    }
     


    return 0;
}
