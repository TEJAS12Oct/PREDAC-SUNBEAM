#include<stdio.h> 
int main()
{
    // while --> entry controlled 
    // for  --> Entry controlled loop 

    int i;
    /*
          for(step1;step2;step4)
          {
                 step3
          }  
          step1 --> is executed only once 
    */ 
    //  for(i=1;i<=5;i++)
    //  {
    //       printf("%d",i);//1 2 3 4 5     
    //  }  
    //  printf("\nOutside the loop %d",i);// 6  

    //  i=1; 
    //  for( ;i<=5;i++)
    //  {
    //       printf("%d",i);//1 2 3 4 5     
    //  }  
    //  printf("\nOutside the loop %d",i);// 6  

     i=1; 
     for( ;i<=5;)
     {
          printf("%d",i);//1 2 3 4 5     
          i++;
     }  
     printf("\nOutside the loop %d",i);// 6  



    return 0;
}
