#include<stdio.h>
int main()
{
    
    int empid,DeptNo;
    char degcode;

    printf("Employee id:");
    scanf("%d",&empid);

    printf("Dept No:");
    scanf("%d",&DeptNo);
 
    printf("Designation code:");
    scanf("%*c%c",&degcode);

    switch(degcode)
    {
        case'M' : printf("Employee with employee id %d is working in 'Marketing' department as Manager",empid);
        break;
        
        case'S' : printf("Employee with employee id %d is working in 'Management' department as Supervisor",empid);
        break;

        case's' : printf("Employee with employee id %d is working in 'Sales' department as Security Officer",empid);
        break;

        case'c' : printf("Employee with employee id %d is working in 'Designing' department as Clerk",empid);
        break;
        
        default: printf(" invalid designation code");

    }


    return 0;
}