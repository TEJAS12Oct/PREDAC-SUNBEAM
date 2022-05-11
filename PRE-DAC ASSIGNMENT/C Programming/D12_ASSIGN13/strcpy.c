#include<stdio.h>
#include<string.h>
int main()
{
char studentname[20];
strcpy(studentname,”Amit”);
printf(“\nStudentname=%s”,studentname);
return(0);
} //Studentname=Amit





// We can’t assign value to a string variable directly as

// char name[20];
// name=”Amit”;

// In place of assignment operator =, we need to use strcpy() function.

// char name[20];
// strcpy(name,”Amit”);