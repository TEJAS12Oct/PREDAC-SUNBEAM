#include<stdio.h> 

int main()
{
    int ans; 
    // bitwise 
    // left shift operator 
    //ans = 10 << 2;
    /*
            0000 1010

              <<2 

            0010 1000
            Decimal -> 40

           left shit 
           multiply by 2 to the power n 

           10 * 2 to the power n 
           10 * 2 to the power 2 
           10 * 4 
           40   

    */
    ans = 10 >> 2;
    /*
               bitwise 
               10 --> 1010 

            0000 1010 

              >>2     
            
            0000 0010
              // decimal is 2   

            divide by 2 to the power n 
            10 / 2 to the power n 
            10 / 2 to the power 2 
            10 / 4 
              2 

    */
    printf("%d",ans);   
    return 0; 
}