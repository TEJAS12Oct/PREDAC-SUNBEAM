#include<stdio.h>  
int main()
{
    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a && b || c;
    // //    (a && b) || c;
    // //     T && T  || XXX
    // //        T   
   
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 

    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a && b || c++;
    // //    (a && b) || c;
    // //     T && T  || XXX
    // //        T   
   
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 

    // int a = 0; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a && b++ || c++;
    // //    F && XXXX || ??
    // //      F || T++ 
    // //      T  
   
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 
 
    // int a = 0; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = ++a && b++ || c++;
    // //     T  && T++ || ??
    // //        T  || XXX
    // //         T 
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 
 
    // int a = 0; 
    // int b = 2; 
    // int c = 0; 
    // int ans; 

    // ans = a++ && b++ || c++;
    // //    F++ && XXX || ??  
    // //        F || F++ 
    // //          F  
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 
   
    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a++ || b++ || c++;
    // //    T++ || XXX || XXX
    // //        T  
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 
   
    // int a = 1; 
    // int b = 2; 
    // int c = 3; 
    // int ans; 

    // ans = a++ && b++ && c++;
    // //    T++ && T++ && T++
    // //        T  
    // printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 
   

      int a = 0; 
      int b = 2; 
      int c = 3; 
      int ans; 

      ans = a++ || b++ && ++c && a++ || b++; 
      //    a++ || ((b++ && ++c) && a++) || b++;  
      //    F++ || ((T++ &&++T) && ???)) || ?? 
      //    F++ || ( T  && T  ) || ?? 
      //    F++ ||    T || ?? 
      //    F || T || ?? 
      //       T || XXXX
      //         T   

      printf("ans = %d a=%d b=%d c=%d",ans,a,b,c); 




    return 0;
}
