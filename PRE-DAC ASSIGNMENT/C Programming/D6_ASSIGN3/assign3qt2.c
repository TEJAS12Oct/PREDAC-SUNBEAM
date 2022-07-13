#include<stdio.h>
int main()
{
    
    float cel,farh;
    printf(" enter the value farh");
    scanf("%f%f",&farh,&cel);
    cel =((float)5/9) *  (farh-32);
    printf("temp n cel=%.2f\n",cel);

    farh = (cel*(float)9/5) + (32);
    printf(" temp in farh=%.2f",farh);
    return 0;
}
