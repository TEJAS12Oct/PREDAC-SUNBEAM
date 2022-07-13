// #include<stdio.h> 
// int main()
// {
//     enum color 
//     {
//         RED=1,BLUE=0,GREEN 
//     };     
    
//     enum color c1;

//     printf("Enter the value"); 
//     scanf("%d",&c1); 


//     switch (c1)
//     {
//     case RED:      //case 1: 
//         printf("RED color"); 
//         break;
        
//     case BLUE:    // case 0:   
//         printf("BLUE color"); 
//         break;
    
//     case GREEN:  //  case 1: 
//         printf("Green color"); 
//         break;  
//     } 

//     return 0;
// }

#include<stdio.h> 
int main()
{
    enum color 
    {
        RED=1,BLUE,GREEN 
    };     
    
    enum color c1;

    printf("Enter the value"); 
    scanf("%d",&c1); 


    switch (c1)
    {
    case RED:      //case 1: 
        printf("RED color"); 
        break;
        
    case BLUE:
        printf("BLUE color"); 
        break;
    
    case GREEN:
        printf("Green color"); 
        break;  
    } 

    return 0;
}


// #include<stdio.h> 
// int main()
// {
    
//     int num=1;

//     switch (num)
//     {
//     case 1:
//         printf("RED color"); 
//         break;
        
//     case 2:
//         printf("BLUE color"); 
//         break;
    
//     case 3:
//         printf("Green color"); 
//         break;  
//     } 

//     return 0;
// }


