#include<stdio.h> 

int main()
{
    char ch; 
    int num; 
    
    printf("Enter the number and character");
    scanf("%d%*c%c",&num,&ch); 

    printf("%d %c",num,ch);  
    
    return 0; 
}



// int main()
// {
//     char ch; 
//     int num; 
    
//     printf("Enter the number"); 
//     scanf("%d%*c",&num);

//     printf("Enter the character"); 
//     scanf("%c",&ch); 
   
    
//     printf("%d %c",num,ch);  
    
//     return 0; 
// }



// int main()
// {
//     char ch; 
//     int num; 
//     printf("Enter the character"); 
//     scanf("%*c%c",&ch); 
    
//     printf("Enter the number"); 
//     scanf("%d",&num);

//     printf("%d %c",num,ch);  
    
//     return 0; 
// }
