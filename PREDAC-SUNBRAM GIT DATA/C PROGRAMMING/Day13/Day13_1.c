#include<stdio.h> 
int main()
{
    
    //Employee --> empid,name,salary

    // int arr[5]--> int 
    int empid;
    char name[20]; 
    float salary; 

    printf("Enter the empid");
    scanf("%d",&empid);  

    printf("Enter the name");
    scanf("%s",name);

    printf("Enter the salary"); 
    scanf("%f",&salary);   


    printf("%d %s %f",empid,name,salary); 


    return 0;
}
