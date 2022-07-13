// strrev() stands for string reverse. 
//This function is used to reverse the order of characters stored in a string variable.

// Program to demonstrate the use of strrev() function.


#include<stdio.h>
#include<string.h>
int main()
{
char studentname[20]=”Amit”;
strrev(studentname);
printf(“\nStudentname=%s”,studentname);
return(0);
}
// Output
// Studentname=timA