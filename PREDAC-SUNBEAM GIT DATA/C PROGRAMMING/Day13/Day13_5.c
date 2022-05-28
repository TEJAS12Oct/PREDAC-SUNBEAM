#include<stdio.h> 

struct date
{
    int day; 
    int month; 
    int year;  
}; 
struct emp
{
    int empid; // 4 
    char name[20]; // 20 
    double salary; // 8 
    struct date join; // 12  // nested structure 
};
int main()
{
    struct emp e1 = {1,"Ketan",2000.00,{1,1,2000}};
    struct emp e2; 

   //printf("%d %s %lf %d-%d-%d",e1.empid,e1.name,e1.salary,e1.join.day,e1.join.month,e1.join.year);     

    printf("Enter empid name and salary,Joindate(day,month,year)"); 
    scanf("%d%s%lf%d%d%d",&e2.empid,e2.name,&e2.salary,&e2.join.day,&e2.join.month,&e2.join.year); 
    //printf("%d %s %lf %d-%d-%d",e2.empid,e2.name,e2.salary,e2.join.day,e2.join.month,e2.join.year);     

    struct emp *p;  
    p = &e2;      
printf("%d %s %lf %d-%d-%d",p->empid,p->name,p->salary,p->join.day,p->join.month,p->join.year); 
    return 0; 
} 

