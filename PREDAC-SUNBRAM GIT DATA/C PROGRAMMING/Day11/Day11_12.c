#include<stdio.h> 
int main()
{
    char str[20]; 

    printf("Enter the name"); 
    //scanf("%[^\n]",str); 
    //scanf("%[a-z]",str); 
    scanf("%[^a-z]",str); 
    //scanf("%s",str); 

    printf("%s",str); 
    return 0;
}

//scanf("%[a-z]",str);
// get user input till char in range a-z(small case )
// abcdefABC --> abcdef 

//scanf("%[a-z A-Z]",str);
// get user input till char in range a-z(small case )
// get user input till char in range A-Z(upper case )


//scanf("%[^a-z]",str); 
// get user input till any char a-z is found
// (stop reading at a-z)