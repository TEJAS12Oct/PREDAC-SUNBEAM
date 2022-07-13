#include<stdio.h> 
int main()
{
    const int num = 10; 
    const int num2 = 10; 
    const int * const ptr = &num;

    printf("%d ",num); // 10 
    printf("%d ",*ptr); // 10  

    //*ptr = 1000; //NOT OK  

    //ptr = &num2; // NOT OK  

    return 0;
}
 


// int main()
// {
//     int num = 10; 
//     int num2 = 20;
//     //int * const ptr; 
//     //ptr = &num;   
//     int * const ptr = &num; // THIS IS OK 
//     //int *  ptr const  = &num;    
//     //ptr = &num2;  

//     printf("%d ",num); // 10 
//     printf("%d ",*ptr); // 10 

//     *ptr = 500; 
//     printf("%d ",num); // 500 
//     printf("%d ",*ptr); // 500  


//     return 0;
// }







// int main()
// {
//     const int num = 10;
//     const int num2 = 20;
//      const int *ptr = &num;
//      //int const  *ptr = &num;
//     //const int const  *ptr = &num;
//  //ptr is non constant pointer pointing to constant int variable       

//     printf("%d ",num); // 10 
//     printf("%d ",*ptr); // 10 

//     //*ptr = 1000; 

//     ptr = &num2; // update 
//     printf("%d ",num2); // 20 
//     printf("%d ",*ptr); // 20 


//     return 0;
// }



// int main()
// {
//     // const --> type modifier 
//     // const --> constant 
//     const int num = 10; 
//     //num = 20; // NO OK  
//     printf("%d",num); // 20 
    
//     return 0;
// }
