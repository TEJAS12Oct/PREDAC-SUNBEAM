#include<stdio.h> 

// I/p ammount >= 5000 
// discount --> 10% 

int main()
{
    double ammount,discount; 

    //Input: 
    printf("Enter the ammount"); 
    scanf("%lf",&ammount);//4000   

    if(ammount>=5000)
       ammount = ammount * 0.90; 
    
    
    printf("Ammount = %lf",ammount); 

    


    return 0; 
}
// int main()
// {
//     double ammount,discount; 

//     //Input: 
//     printf("Enter the ammount"); 
//     scanf("%lf",&ammount);//4000   

//     if(ammount>=5000)
//     {
//             discount = ammount * 0.10; 
//             ammount = ammount - discount;  
//     } 
//     printf("Ammount = %lf",ammount); 

    


//     return 0; 
// }