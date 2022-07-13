#include<stdio.h> 
int main()
{ 
    int a[]={1,2,3};    // 12           4
    printf("%d, %d\n",sizeof(a), sizeof(a[-1]));
    print_size(a); 
} int print_size(int a[]) 
{                       // 4          4 
    printf("%d,%d\n",sizeof(a),sizeof(a[3])); 
    a++;
        printf("\n%d",a[-1]); return 0; 

   
} 