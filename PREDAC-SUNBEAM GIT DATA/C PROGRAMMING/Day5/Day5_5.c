#include<stdio.h> 

int main()
{
    // int a = 2; 
    // int b = 2; 
    // int c = 2; 
    // int ans; 

    // ans = (a + b + c) / 3; 
    // //    (int + int + int) / ( int ) 
    // //       ( int ) / ( int )
    // //          ( int)(RHS)
    // // ans --> int ( LHS)
    // // LHS and RHS are same 
    // //        int  <---int   

    // printf("ans = %d",ans); 


    // int a = 2; 
    // int b = 2; 
    // int c = 1; 
    // float ans; 

    // /*
    //        double 
    //        float  
    //        int  
    //        char  
    // */

    //    ans = (a + b + c) / 3;// 1.66 
    //       //  (int + int + int) / (int) 
    //       //      int / int 
    //       //        int
    //       // 1.66 --> (int)--> 1 
    //       //  1 --> (float) --> 1.00             


    // printf("ans = %f",ans); 


    // int a = 2; 
    // int b = 2; 
    // int c = 1; 
    // float ans; 

    // /*
    //        double 
    //        float  
    //        int  
    //        char  
    // */

    //    ans = (a + b + c) / 3.0;// 1.66 
    //        // (int +int+int)/(double)
    //        //   (int ) / ( double )
    //        //       double 
    //        // RHS --> double --> 1.66 
    //        // 1.66 --> ( float ) --> 1.66 

    // printf("ans = %f",ans); 


    // int a = 2; 
    // int b = 2; 
    // int c = 1; 
    // float ans; 

    // /*
    //        double 
    //        float  
    //        int  
    //        char  
    // */

    //    ans = (a + b + c) / 3.0f;// 1.66 
    //        // (int +int+int)/(float)
    //        //   (int ) / ( float )
    //        //       float 
    //        // RHS --> float --> 1.66 
    //        // 1.66 --> ( float ) --> 1.66 

    // printf("ans = %f",ans); 


    int a = 2; 
    int b = 2; 
    int c = 1; 
    float ans; 

    /*
           double 
           float  
           int  
           char  
    */

       ans = ((float)a + b + c) / 3;// 1.66
       //    ( float + int + int ) / (int )
       //          float  / int 
       //             float 
       //  RHS --> FLOAT
       //  LSH --> FLOAT   

    printf("ans = %f",ans); 


    // mixed arithmatic 




      


    return 0; 
}