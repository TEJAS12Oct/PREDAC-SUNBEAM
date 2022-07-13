#include<stdio.h> 
int main()
{
        // increment and decrement opr
        // ++ , -- 
        // unary operator
        // preincrement , postincrement 
        // predecrement , postdecrement

        int ans; 
        int num = 2; 
        // ++ --> 1 
        // ++num --> num = num + 1 
        // num++ --> num = num + 1
        // --num --> num = num - 1 
        //   num-- --> num = num - 1 

        //ans = ++num; //preincrement
        // 1. increment ++num ( num = num + 1 )
        // 2. assign the updated num to ans  
         
         //ans = num++; //postincrement // ++ ==> + 1 
         
        //ans = --num; // -- --> num = num - 1    
        // 1. Decrement num by 1 
        // 2  Assign to ans 
        
        ans = num--; 
        //1. Assign current num to ans 
        //2. Decrement num by 1    
        printf("%d %d",ans,num); 



}