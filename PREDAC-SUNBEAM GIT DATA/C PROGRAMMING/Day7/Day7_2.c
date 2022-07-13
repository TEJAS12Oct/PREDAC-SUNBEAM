#include<stdio.h> 
int main()
{
    int num; 

    printf("Enter the number");
    scanf("%d",&num); 

    switch(num) //1
    {

         
         case 2: 
           printf("Two");
           break;   // jump statment  
         case 1: 
           printf("One");
           break;   

         case 3: 
           printf("Three");  
           break;   

         default: 
           printf("Invalid");
           break;        


    }
    printf("\nOutside the switch"); 
    return 0; 


}


// int main()
// {
//     int num; 

//     printf("Enter the number");
//     scanf("%d",&num); 

//     switch(num) //1
//     {
//          case 1: case 12:  
//            printf("One");
//            break;   // jump statment  
//          case 2: 
//            printf("Two");
//            break;   

//          case 3: 
//            printf("Three");  
//            break;      

//     }
//     printf("\nOutside the switch"); 
//     return 0; 


// }


// int main()
// {
//     int num; 

//     printf("Enter the number");
//     scanf("%d",&num); 

//     switch(num) //1
//     {
//          case 1:
//            printf("One"); 

//          case 2: 
//            printf("Two"); 

//          case 3: 
//            printf("Three");       

//     }

//     return 0; 


// }

/*
        if user i/p 
        1 --> one 
        2 --> two 
        3 --> three 
        
     
     if(i==1)
       printf("One");
     else 
     {
          if(i==2)
            printf("Two"); 
          else 
            printf("Three"); 
     } 


*/