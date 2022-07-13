// strcmp()  stands for string compare ignore case. 
// This function is used to compare value of one string value with another string value 
// but it does not care for the case of characters 
// i.e. capital letters and small letters are assumed same.
// Program to demonstrate the use of strcmpi() function.


#include<stdio.h>
#include<string.h>
int main()
{
char name1[20],name2[20];
printf(“Enter first name=”);
gets(name1);
printf(“Enter second name=”);
gets(name2);
if(strcmpi(name1,name2)==0)
printf(“Both names are same”);
else
printf(“Names are not same”);
return(0);
}
// Output
// Enter first name=lovejot
// Enter second name=LOVEJOT
// Both names are same