#include<stdio.h> 
int main()
{   
    // init list 
     char str1[5] = {'A','B','C','D','E'}; 
     // 5 char array --> 5 bytes     
      
    char str2[5] = {'A','B','C','D','\0'}; // string 
    // \0 --> null character --> Ascii --> 0    
    // 5 char array terminated with \0 char 
    
    char str3[5] = {'I','n','f','o'};// partial init 
    //               I   n   f   o   0 
    //              [0] [1] [2] [3] [4]   
    // 5 char array terminated with \0 = string 
    // partial init -> rest element are init to zero 


    char str4[] = {'s','u','n','b','e','a','m'}; 
    // array of char array 

    int i;
    for(i=0;i<7;i++)
    {
        putchar(str4[i]); 
    } 
    // for(i=0;i<5;i++)
    // {
    //     putchar(str1[i]); 
    // }
   
    // for(i=0;str2[i]!='\0';i++)
    // {
    //     putchar(str2[i]); 
    // }

    // != --> relational operator 

    // a = !b // logical operator 
    // a!=b  // relational operator 

    // for(i=0;str3[i]!='\0';i++)
    // {
    //     putchar(str3[i]); 
    // }
   
    return 0;
}


  