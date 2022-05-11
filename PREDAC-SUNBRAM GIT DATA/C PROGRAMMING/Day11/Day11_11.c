#include<stdio.h> 

int main()
{
    //%s it will read upto white spaces(space,tab,newline)


    char name[80],city[40],job[60];

    printf("Enter the city"); 
    scanf("%s%*c",city); 

    // scan set 
    printf("Enter the name"); 
    scanf("%[^\n]%*c",name); 

    printf("Enter the job"); 
    //scanf("%s",job); 
     gets(job);

     // gets() will scan upto \n
     // New york 


printf("city=%s \n name=%s \n job=%s\n",city,name,job); 
puts(job); 
}

// new york 