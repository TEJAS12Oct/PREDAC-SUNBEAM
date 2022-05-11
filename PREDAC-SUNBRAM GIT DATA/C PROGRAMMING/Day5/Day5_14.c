#include<stdio.h> 

int main()
{
        // ++a
        // a++
        // a--
        // --a 
        // ++a -==> a = a + 1

            // a + 1 // LVALUE --> no  
            // a = a + 1 // LVALUE --> yes   


        int a,b,c; 

        a = ( 1 ,2 ,3); 
        //  a = 3 

        b = ( ++a, ++a, ++a ); 
        //     4    5    6  
         
          //a = 6 
          // b =6  
        //b=6 
        c = ( b++ , b++ , b++ ); 

        printf("%d %d %d",a,b,c); 
        //                6 9 8  

        return 0; 
}