#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double area,peri,sp;
    
  
    printf("enter first side\n");
    scanf("%d",&a);

    
    printf("enter second side\n");
    scanf("%d",&b);


    printf("enter third side\n");
    scanf("%d",&c);

    peri=a+b+c;
    sp=peri/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-a));

    printf("peri=%.2lf sp=%.2lf area=%.2lf",peri,sp,area);
    return 0;


}