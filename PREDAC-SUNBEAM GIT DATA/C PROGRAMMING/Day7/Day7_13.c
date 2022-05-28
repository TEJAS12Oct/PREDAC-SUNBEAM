#include<stdio.h>

int main()
{
    // break,return,goto,continue 
    // jump statment 

      int i = 3; 

      //if(i==3)//break statement not within loop or switch
        //break;   
     
       for(i=1;i<=5;i++)
       {    
            if(i==3)
               break;
            printf("%d",i);//1 2    
             
       }
       printf("\n Outside the loop %d",i); // 3 



    return 0; 
}