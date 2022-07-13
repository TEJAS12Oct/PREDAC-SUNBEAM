#include<stdio.h> 
#include<string.h> 
struct emp // datatype-declaration 
{
    int empid; //4 
    char name[20]; // 20 
    double salary;// 8 
};
void accept_emp(struct emp *p); 
void print_emp(struct emp e1); 
int main()
{
    struct emp e1;  // 1 Ketan 1000 
    accept_emp(&e1);// pass by address  

    print_emp(e1); // pass by value 
}

// -> arrow operator 
void accept_emp(struct emp *p)
{
        printf("Enter the empid");
        scanf("%d",&p->empid); 

        printf("Enter the name");
        scanf("%s",p->name);

        printf("Enter the salary");
        scanf("%lf",&p->salary);  

}
void print_emp(struct emp e1)
{
    printf("%d %s %lf",e1.empid,e1.name,e1.salary); 
}

