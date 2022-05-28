#include<stdio.h> 
int main(  )
{
    // width specifier 

    int num  = 10; 
    //printf("%d",num); // 10 
    
    //  printf("%6d",num); // right justified 
    //  //         1 0   
    //  // - - - - - -  

     //printf("%-6d",num); // left justified
     // 1 0            
     // - - - - - -  

     //printf("%06d",num); // right justifier 
     // 0 0 0 0 1 0   
     // - - - - - -  
 
       float fvar = 12.50; 

       //printf("%f",fvar); 

         //printf("%6.2f",fvar); 
         //   1 2 . 5 0 
         // - - - - - - 

         //printf("%06.2f",fvar); 
         // 0 1 2 . 5 0 
         // - - - - - - 

         //printf("%-6.2f",fvar);//left justified    
         // 1 2 . 5 0 
         // - - - - - - 

        printf("%.2f",fvar);//left justified    


    return 0; 
}

