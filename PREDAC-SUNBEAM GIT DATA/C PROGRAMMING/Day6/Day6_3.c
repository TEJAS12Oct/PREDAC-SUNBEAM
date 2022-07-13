#include<stdio.h> 
int main()
{
    // int ans; 
    // int a = 1; 
    // int b = 2; 
    // ans = a++ && b;
    // //    T++ && T 
    // //       T --> 1 

    // printf("ans=%d a=%d b=%d",ans,a,b);    

    // int ans; 
    // int a = 1; 
    // int b = 2; 
    // ans = a++ && b++;
    // //    T++ && T++
    // //        T       

    // printf("ans=%d a=%d b=%d",ans,a,b);    

    // int ans; 
    // int a = 0; 
    // int b = 2; 
    // ans = a++ && b++;
    // //    F++ && XXXX
    // //      F --> 0 
    // printf("ans=%d a=%d b=%d",ans,a,b);    

    // int ans; 
    // int a = 0; 
    // int b = 2; 
    // ans = ++a && b++;
    // //      T && T++   
    // //      T --> 1  
    // printf("ans=%d a=%d b=%d",ans,a,b);    

    // int ans; 
    // int a = -1; 
    // int b = 2; 
    // ans = ++a && b++;
    // //     F  && XXX
    // //       F 
     
    // printf("ans=%d a=%d b=%d",ans,a,b);    

    int ans; 
    int a = 1; 
    int b = 0; 
    ans = ++a && b++;
    //     T  && F++
    //       F  ==> 0     

    printf("ans=%d a=%d b=%d",ans,a,b);    
  
      


    return 0;
}
