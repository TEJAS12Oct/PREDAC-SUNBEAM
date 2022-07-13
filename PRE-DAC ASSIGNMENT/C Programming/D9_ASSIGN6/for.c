#include<stdio.h>
int main()
{
  int n1=1,n2=1,res,i,num;
  printf("Enter the Num:");
  scanf("%d",&num);

  printf("%d %d",n1,n2);

  for(i = 2;i<num;i++)
 {
	res = n1 + n2;
	printf("%d ",res);
	n1 = n2;
	n2 = res;

    return 0;
 }
}