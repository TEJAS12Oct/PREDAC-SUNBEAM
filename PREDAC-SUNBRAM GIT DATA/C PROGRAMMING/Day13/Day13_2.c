#include<stdio.h> 
#include<string.h> 
struct emp // datatype-declaration 
{
    int empid; //4 
    char name[20]; // 20 
    double salary;// 8 
};
// global structure 
// int --> datatype ( built-in) --> int var  
// struct --> user-defined --> variable 

//struct student s1={1,"Abc"};// NOT OK 
int main()
{
    struct student
    {
         int rollnumber; 
         char name[20];    
    }; // local structure 
    
    //struct student s1={1,"Abc"};  
    
    
    // int x = 10; // init ( built-in)
    // int y = 20; // init ( built-in)
       struct emp e1 = { 1, "Ketan",1000.00}; 
       // e1 --> variable/object    
       struct emp e2={2,"Amit"}; // partial init  
       struct emp e3; 
       struct emp e4;  

    //printf("%d %s %lf",e1.empid,e1.name,e1.salary); 
        
       //struct emp *p = &e1;  
    // --> arrow operator / indirect access operator 
    //printf("%d %s %lf",p->empid,p->name,p->salary); 
    
    /*
            int x; // declaration 
            x = 10; // assignement  
    */
//    e3.empid = 3; 
//    strcpy(e3.name,"Aditya");
//    e3.salary = 2000.00;  

//    printf("%d %s %lf",e3.empid,e3.name,e3.salary); 
    
    printf("Enter the  empid name and salary"); 
    scanf("%d %s %lf",&e4.empid,e4.name,&e4.salary);


    printf("%d %s %lf",e4.empid,e4.name,e4.salary); 


    return 0; 

}

    

/*  
    int num = 10; 
    int *ptr = &num; 
*/