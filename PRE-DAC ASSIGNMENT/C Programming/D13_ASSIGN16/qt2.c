#include<stdio.h>
# define SIZE 5


struct student
{
    char name[20];
    int roll;
    float marks;
};
void accept_student(struct student s[]);
void print_student(struct student s[]);

int main()
{
    struct student s[10];
    accept_student(s);
    print_student(s);

    return 0;
}
void accept_student(struct student s[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter name of student: ");
        scanf("%s",s[i].name);
        printf("Enter roll no of student: ");
        scanf("%d",&s[i].roll);
        printf("Enter marks of student: ");
        scanf("%f",&s[i].marks);

    }
}
void print_student(struct student s[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("student %d",i+1);
        printf("Name :%s",s[i].name);
        printf("\nRoll no :%d",s[i].roll);
        printf("\nMarks :%f",s[i].marks);
    }
}