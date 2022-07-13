#include<stdio.h>

int main()
{
   int a,b,c,num;

   printf("Enter 4 digit number");
   scanf("%d",&num);

   a=num/1000;
   num=num%1000;
   b=num/100;
   num=num%100;
   c=num/10;
   num=num%10;

   printf("%d %d %d %d\n",a,b,c,num);

   int d,e,f;
   d=a*1000;
   e=b*100;
   f=c*10;

   printf("number= %d+%d+%d+%d\n",d,e,f,num);

   printf("%d%d%d%d\n",num,c,b,a);



    return 0;
}