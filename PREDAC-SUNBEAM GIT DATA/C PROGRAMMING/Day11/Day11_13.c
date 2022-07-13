#include<stdio.h> 
#include<string.h> 
int main()
{
    char str1[]="Sunbeam Infotech"; 
    // str1 is 16 + 1(\0) 
    char *str2 = "Sunbeam Infotech";
    // pointer to a string  
    char str3[] = "Sunbeam\0Infotech"; 

    //printf("sizeof(str1)=%d\n",sizeof(str1));// 17
    //printf("sizeof(str2)=%d\n",sizeof(str2));// 4 / 8 
    // sizeof pointer 
    //printf("sizeof(str2)=%d\n",sizeof(str3));// 17    

    // strlen( ) --> string length 
 // strlen is a function that count number of chars 
 // until \0 is encountered 

    

    //  printf("strlen(str1)=%d\n",strlen(str1));// 16
    //  printf("strlen(str2)=%d\n",strlen(str2));// 16
    //  printf("strlen(str2)=%d\n",strlen(str3));// 7 

          //printf("%s",str1); 
          //printf("%s",str2);   
           printf("%s",str3);    
    return 0;
}

