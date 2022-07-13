#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};
void acceptEmpinfo(struct emp *e);
void displayEmpinfo(const struct emp *e);

int main()
{
    // struct emp is user defined data type 
    // e1 is variable/object of user defined data struct emp
    struct emp e1; //local var

   

    printf("\n enter emp infomation::\n");
    acceptEmpinfo(&e1);  // e actual argrument

    printf("\n emp infomation::\n");
    displayEmpinfo(&e1);
    
    e1.sal=-10000; // allowed
    
    printf("\n emp infomation::\n");
    displayEmpinfo(&e1);
   
    return 0;
}
//e formal argrument
void acceptEmpinfo(struct emp *e)
{

    printf("\n enter empno::");
    scanf("%d", &e->empno);
    
    printf("\n enter emp name::");
    scanf("%s", e->name);
    printf("\n enter sal::");
    scanf("%f", &e->sal);
    return;
}
void displayEmpinfo(const struct emp *e)
{
   // e->sal=-10000;
    printf("\n empno=%d", e->empno);
    printf("\n empname=%s", e->name);
    printf("\n emp sal=%.2f", e->sal);
    return;

}