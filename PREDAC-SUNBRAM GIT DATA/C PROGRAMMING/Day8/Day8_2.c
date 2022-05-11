#include<stdio.h> 


int main()
{
    // anonymous enum 
    enum // created a datatype 
    {
        GREEN,BLUE,WHITE,YELLOW,RED  
    }c1,c2,c3;

    
    
    c1 = RED; // --> 0 
    c1++;  // OK --> variable can be incrmented 
    printf("%d\n",c1); 
    c1 = BLUE; 
    c1++;     
    printf("%d\n",c1); 


    return 0;
}

// enum color // created a datatype 
// {
//     GREEN=1,BLUE=11,WHITE=2,YELLOW=-1,RED  
// };

// int main()
// {
//     int num;
//     int num1,num2,num3;
//     // num1++,num2++   
//     // int --> datatype 
//     // num --> variable 

//     enum color c1,c2,c3; 
//     // datatype variable-name  

//     // c1,c2,c3 --> variable-name 
//     // enum color --> datatype 

//     printf("%d\n",sizeof(enum color)); // 4  
//     c1 = RED; // --> 0 
//     c1++;  // OK --> variable can be incrmented 
//     printf("%d\n",c1); 
//     c1 = BLUE; 
//     c1++;     
//     printf("%d\n",c1); 


//     return 0;
// }

// enum color // created a datatype 
// {
//     RED,GREEN,BLUE,WHITE,YELLOW 
// };

// int main()
// {
//     int num;
//     int num1,num2,num3;
//     // num1++,num2++   
//     // int --> datatype 
//     // num --> variable 

//     enum color c1,c2,c3; 
//     // datatype variable-name  

//     // c1,c2,c3 --> variable-name 
//     // enum color --> datatype 

//     printf("%d\n",sizeof(enum color)); // 4  
//     c1 = RED; // --> 0 
//     c1++;  // OK --> variable can be incrmented 
//     printf("%d\n",c1); 
//     c1 = BLUE; 
//     c1++;     
//     printf("%d\n",c1); 


//     return 0;
// }






// enum color // created a datatype 
// {
//     RED,GREEN,BLUE,WHITE,YELLOW 
// };

// int main()
// {
//     printf("%d\n",RED);
//     printf("%d\n",GREEN);
//     printf("%d\n",BLUE);
//     //RED++;  //0++ --> 0 = 0 + 1 
//     //GREEN++;//1++ --> 1 = 1 + 1      
//     return 0;
// }
