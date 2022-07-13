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
void sort_student(struct student s[]);

int main()
{
    struct student s[10];
    accept_student(s);
    print_student(s);
    sort_student(s);
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
    printf("\n");
}
void print_student(struct student s[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("\nstudent %d",i+1);
        printf("\nName :%s",s[i].name);
        printf("\nRoll no :%d",s[i].roll);
        printf("\nMarks :%f",s[i].marks);
        printf("\n");
    }
    
}
void sort_student(struct student s[])
{
    int i,j;
    struct student temp;
    for(i=0;i<SIZE;i++)
    {
        for(j=(i+1);j<SIZE;j++)
        {
            if(s[i].roll>s[j].roll)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
}