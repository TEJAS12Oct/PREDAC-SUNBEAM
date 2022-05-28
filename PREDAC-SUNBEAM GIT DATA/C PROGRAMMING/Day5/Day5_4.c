#include<stdio.h> 
/*
        calculate area and ciruf of circle 
        // PI --> 3.1412 
        // area -> PI * r * r 
        // circum = 2 * PI * r 
*/


int main()
{
    // variable declaration 

      float radius,area,cirumference; 

       //1.Input 
       // I/P the radius ---> scanf( )
       printf("Enter the radius"); 
       scanf("%f",&radius);   

      //2. Processing the logic 
         area = 3.1412 * radius * radius; 
         cirumference = 2 * 3.1412 * radius;       
     
     //3. Output 
          printf("Area = %f\n",area);
          printf("Cirumference = %f\n",cirumference);     

    return 0; 
}