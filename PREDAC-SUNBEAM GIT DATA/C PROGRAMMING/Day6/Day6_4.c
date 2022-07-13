#include<stdio.h> 

int main()
{
    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a || b && c;
    // //    a || ( b && c);
    // //    T || XXXX
    // ///     T 
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 

    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a || b++ && c++;
    // //    a || ( b++ && c++);
    // //    T || XXXX
    // ///     T 
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 

    // int a = 0; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a || b++ && c++;
    // //    a || ( b++ && c++);
    // //    F || ( T++ && T++ )
    // ///   F ||  T 
    // //      T  --> 1      
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 

    // int a = 0; 
    // int b = 2; 
    // int c = 0; 
    // int ans; 

    // ans = a || b++ && c++;
    // //    a || ( b++ && c++);
    // //    F || ( T++ && F++ )
    // //    F ||   F 
    // //      F --> 0 
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 

    int a = 0; 
    int b = 0; 
    int c = 0; 
    int ans; 

    ans = a || b++ && c++;
    //    a || ( b++ && c++);
    //    F || ( F++ && XXXX )
    //    F ||  F 
    //      F --> 0    
   
    printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 



    return 0; 
}