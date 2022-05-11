// strlen() stands for string length. 
// This function is used to find number of characters stored in a string variable or string constant. 
// This function doesn’t count null character.
// The header file required for this function is “string.h”.

#include<stdio.h>
#include<string.h>
int main()
{
char studentname[20]=”Amit”;
int n;n=strlen(studentname);printf(“\nNumber of characters=%d”,n);
return(0);
}//4