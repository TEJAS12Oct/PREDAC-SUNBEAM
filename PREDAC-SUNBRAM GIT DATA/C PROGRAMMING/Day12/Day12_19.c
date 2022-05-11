#include<stdio.h> 

// stringizing operator 

#define PRINT(x) puts(#x); 
#define PRINT_VAR(var) printf(#var "= %d\n",var)


//Token pasting operator (##)

#define PRINT_SAL(a,b) printf("basicsal = %d\n",a##b)


int main()
{
    int adventure = 100 ;  

    PRINT(MY NAME IS BATMAN)
    //PRINT("MY NAME IS BATMAN")    

    PRINT_VAR(adventure);
    //printf("adventure" "= %d\n",adventure);

    int basicsalary = 5000; 
    PRINT_SAL(basic,salary);
    //printf("basicsal = %d\n",basicsalary) 

    return 0;
}
