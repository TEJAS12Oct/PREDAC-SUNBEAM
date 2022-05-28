#include<stdio.h> 
/*
    std 1 to 4 --> Grade('A','B','C')
    std 5 to 10 -->marks(60,70,...)  
*/
struct student 
{
    int roll; 
    char name[20]; 
    int std; 
    union 
    {
        char grade; 
        int marks; 
    }result; // 4  
}; 

int main()
{
    struct student s1; 
    printf("Enter roll name and std "); 
    scanf("%d%s%d%*c",&s1.roll,s1.name,&s1.std);

    printf("\nroll = %d name = %s std = %d\n",s1.roll,s1.name,s1.std); 

    if(s1.std<=4)
    {
            printf("Enter the grade"); 
            s1.result.grade = getchar(); 
            printf("Grade = %c\n",s1.result.grade);   
    }
    else 
    {
          printf("Enter the marks"); 
          scanf("%d",&s1.result.marks); 
          printf("Marks : %d\n",s1.result.marks);     
    }


    return 0; 
}
