#include<stdio.h>
#pragma pack(1)
struct emp
{
    int empno;
    char name[10];
    float sal;
};
int main()
{
    // struct emp is user defined data type 
    // e1 is variable/object of user defined data struct emp
   // struct emp e1; //local var
    struct emp e1={100,"abc"};
    struct emp *ptr=&e1;
    printf("\n sizeof e1=%d", sizeof(e1));
    printf("\n sizeof ptr=%d", sizeof(ptr));


    printf("\n enter emp infomation::\n");
    printf("\n enter empno::");
    scanf("%d", &e1.empno);
    
    printf("\n enter emp name::");
    scanf("%s", e1.name);
    //getchar();
    //scanf("%[^\n]s", e1.name);
   // scanf("%[^.]s", e1.name);
    //gets(e1.name);
    printf("\n enter sal::");
    scanf("%f", &e1.sal);

    printf("\n emp infomation::\n");
    printf("\n empno=%d", e1.empno);
    printf("\n empname=%s", e1.name);
    printf("\n emp sal=%.2f", e1.sal);
 
    printf("\n emp infomation:: using arraow operator\n");
    printf("\n empno=%d", ptr->empno);
    printf("\n empname=%s", ptr->name);
    printf("\n emp sal=%.2f", ptr->sal);
 
    printf("\n emp infomation:: using . operator\n");
    printf("\n empno=%d", (*ptr).empno);
    printf("\n empname=%s", (*ptr).name);
    printf("\n emp sal=%.2f", (*ptr).sal);
    return 0;
}
