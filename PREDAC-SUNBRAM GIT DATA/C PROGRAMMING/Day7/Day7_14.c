#include<stdio.h> 
int main()
{
    // continue 
    int i; 

    // if(i==3)     //continue statement not within a loop 
    //   continue; 

 //continue takes the control to nearest enclosing loop 

        for(i=1;i<10;i++)
        {
              if(i%2==0)
                 continue;
              printf("%d",i); //1 3 5 7 9   
        } 


    return 0;
}
