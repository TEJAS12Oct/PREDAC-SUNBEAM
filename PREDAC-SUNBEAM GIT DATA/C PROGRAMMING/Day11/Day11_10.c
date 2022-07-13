#include<stdio.h> 
int main()
{
    int i; 
    char str[] = "Sunbeam Infotech"; 
    char name[20]; 

    //printf("%s",str); 
    // %s --> string 

    // for(i=0;str[i]!='\0';i++)
    // {
    //     putchar(str[i]); 
    // }

        printf("Enter the name");
        scanf("%s",name);
        // str --> base address 
        // no need to give & 

        printf("%s",name); 

    
    return 0;
}
