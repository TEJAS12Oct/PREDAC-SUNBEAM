#include<stdio.h> 
int main()
{
    
    
    // using string literal 
    
    char str4[5] = "Tech";
    //     short hand  decl ->  {'T','e','c','h','\0'};  
    //     string 

    char str5[] = "Aditya"; // string 
    // "Aditya" is called string literal/constant 
    // 'A''d''i''t''y''a''\0' 
    //printf("%d\n",sizeof(str5)); 

    char str7[4] = "Pune"; 
    // just a char array 
    // str7 is not a string 

    int i; 
    i=0; 
    while(i<4)
    {
        putchar(str7[i]); 
        i++;
    }


    // int i; 
    // i=0; 
    // while(str5[i]!='\0')
    // {
    //     putchar(str5[i]); 
    //     i++;
    // }

    // i=0; 
    // while(str4[i]!='\0')
    // {
    //     putchar(str4[i]); 
    //     i++;
    // }




    return 0;
}

