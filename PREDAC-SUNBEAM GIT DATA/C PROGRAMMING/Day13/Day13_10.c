#include<stdio.h> 

int main()
{
    FILE *fptr; 
    char ch; 

    fptr = fopen("Sunbeam.txt","a");
    if(fptr==NULL)
    {
        printf("Unable to locate"); 
        return 0; 
    } 
    printf("Specify the character"); 
    while(( ch = getchar() )!='Q') 
    {
            fputc(ch,fptr); 
    }
    printf("\n Success"); 
    fclose(fptr); 
}