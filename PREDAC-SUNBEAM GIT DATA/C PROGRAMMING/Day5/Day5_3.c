#include<stdio.h> 

// calculate the perimeter of rectangle 
// 2 * ( length + breadth)
int main()
{
 
    // variable declaration 
    // 1. What will be my names of the variable 
    // 2. What will be the type of the variable 

     double length,breadth,peri;// variable declaration 
        

    //1. Input : scan the length and breadth
    printf("Enter the length and breadth"); 
    scanf("%lf%lf",&length,&breadth); 

    //2. Processing the logic 
    //  2 * ( length + breadth )
     
    peri = 2 * ( length + breadth );  

    //3. Output : print the perimeter 
    printf("peri = %.2lf",peri);   

    return 0; 
}
