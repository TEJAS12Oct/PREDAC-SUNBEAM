#include<stdio.h> 
#define ADD(a,b) (a+b)
#define MULTIPLY(a,b) (a*b)
#define SQR(x) ((x) * (x))

int main()
{

    printf("Add = %d\n",ADD(3,4));
    //printf("Add = %d",(3 +4));

    printf("Multipy = %d\n",MULTIPLY(3,4));
    //printf("Add = %d",3*4);

    printf("Multipy = %d\n",MULTIPLY(2+1,3+1));
    //printf("Multipy = %d\n"2+1*3+1); 
    
    printf("SQR = %d\n",SQR(2+3));
    //printf("SQR = %d\n",( (2+3)*(2+3)) ); 

    return 0; 
}