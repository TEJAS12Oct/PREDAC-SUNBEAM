#include<stdio.h> 

int main()
{
    FILE *fptr;
    char ch; 

    fptr = fopen("Sunbeam.txt","a");
    if(fptr==NULL)
    {
        printf("Unable to open file"); 
        return 0;  
    }  
    printf("Specify the char"); 
    while((ch=getchar())!='Q')
    {
            fputc(ch,fptr); 
    } 
    printf("\n sucess");     

    fclose(fptr); 
    return 0; 
}