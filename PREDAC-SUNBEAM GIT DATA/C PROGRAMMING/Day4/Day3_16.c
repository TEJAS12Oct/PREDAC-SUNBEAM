#include<stdio.h> 

int main()
{   
    
     
    float fvar; 
    double d1;
    int num; 

    printf("Enter the num float and double "); 
    scanf("%d%f%lf",&num,&fvar,&d1); 
    printf("fvar = %f number = %d d1 = %lf",fvar,num,d1); 

    return 0; 
}
// int main()
// {
//     int num;  
//     float fvar; 
//     double d1;

//     printf("Enter the number\n");
//     scanf("%d",&num);  // 10  

//     printf("Enter the float value\n"); 
//     scanf("%f",&fvar);// 12.33 

//     printf("Enter the double value\n"); 
//     scanf("%lf",&d1);  // 2.5 

//     printf("fvar = %f number = %d d1 = %lf",fvar,num,d1); 

//     return 0; 
// }