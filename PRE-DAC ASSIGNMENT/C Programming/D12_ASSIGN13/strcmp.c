// strcmp()  stands for string compare with specific number of characters. This function is used to compare value of one string value with another string value but it would compare specific number of characters as provided by the programmer or user.

// The header file required for this function is “string.h”.

// The syntax for strncmp() is

// strncmp(Strvar1,Strvar2,N);

// Here, Strvar1 and Strvar2 are string variables or constants which we want to compare.

// N specifies the number of characters to be compared


#include<stdio.h>
#include<string.h>
int main()
{
char name1[]=”amit”,name2[]= “amita”;
if(strncmp(name1,name2,3)==0)
printf(“Values are same”);
else
printf(“Values are not same”);
return(0);
}//Values are same