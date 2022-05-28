#include<stdio.h> 
// user-defined function 
int addition(int p , int q); // function declaration 
/*
    function declaration 
    There is a function with name addition and 
    2 arguments of type int and returning the value 
    of type int 
*/
// user-defined function 
int main()
{
    int num1 = 2; 
    int num2 = 2; 
    int result; 
    // num1 and num2 are local to the function main()

    result = addition(num1,num2); // function call
    //        2    2 
    // num1 and num2 are called as actual argument   

    printf("Result = %d\n",result); // 4 

    result = addition(3,3);  
    
    printf("Result = %d\n",result);// 6 

    result=addition(10,2);  

    printf("Result = %d\n",result);// 12 



    return 0;
}

//calling function --> main 
// called function -->addition 

// return-type function-name(arguments); 

// addition --> name of the function 
//function defination
//           2       2 
int addition(int p , int q)// p and q are called as formal arg 
{
        int ans; // ans is local to addition function 
        ans = p  + q; // 2 + 2
        return ans; 
        //ans is returned back to calling function 
        // calling function ---> main( ) 


}


/*
        user -->call-->carpentor(chair)-->return-->chair

        carpentor workshop
        {
            // BUILDING a Chair 
        }


*/



