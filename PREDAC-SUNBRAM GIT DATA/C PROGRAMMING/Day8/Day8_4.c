#include<stdio.h> 

int main()
{
    enum city
    {
            PUNE,KARAD,SATARA,KOLHAPUR 
    }; 

    // alias --> nick-name (Alternate name)
    // alias --> data-type 
    int num; 
    // int --> datatype 
    // num --> variable-name 

    typedef int INT;
    // int --> alias-->INT  
    INT num1; 
    // int num1;
    // int --> built-int  

    enum city c1; 
    //datatype variable-name

    typedef enum city e_c;
    e_c c2,c3,c4; 
    //e_c--> enum city 
    // enum city c2,c3,c4  


}