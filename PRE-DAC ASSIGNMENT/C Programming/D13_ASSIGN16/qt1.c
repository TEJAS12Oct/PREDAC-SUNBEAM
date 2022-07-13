#include<stdio.h>
#pragma pack(1)

struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student s;

    printf("Enter name of student: ");
    scanf("%s",s.name);
    printf("Enter roll no of student: ");
    scanf("%d",&s.roll);
    printf("Enter marks of student: ");
    scanf("%f",&s.marks);

    printf("Name :%s",s.name);
    printf("\nRoll no :%d",s.roll);
    printf("\nMarks :%f",s.marks);

    return 0;
}