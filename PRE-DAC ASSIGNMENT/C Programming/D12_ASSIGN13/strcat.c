// The header file required for this function is “string.h”.

// The syntax for strcat() function is

// strcat(Str_Target,Str_Source);

// Str_Target is the string variable whose value we want to combine with some other string value.

// Str_Source is the string value which we want to combine with the value of string variable

// Str_Target. This value can be a string constant or a string variable. Size of Str_Target should be larger than or equal to the combined size of Str_Target and Str_Source.

// Program to demonstrate the use of strcat() function.

#include<stdio.h>
#include<string.h>
int main()
{
char studentname[20]=”Amit”;
clrscr();
strcat(studentname,” Singh”);
printf(“\nStudentname=%s”,studentname);
return(0);
}//Studentname=Amit Singh