#include<stdio.h> 
#include<string.h> 
struct emp // datatype-declaration 
{
    int empid; //4 
    char name[20]; // 20 
    double salary;// 8 
};
void accept_emp(struct emp a[],int n); 
void print_emp(struct emp a[],int n);
int main()
{
    struct emp e1[3]; // array of structure  
    accept_emp(e1,3);// name of array 
    print_emp(e1,3);// name of array 


    
}

// -> arrow operator 
void accept_emp(struct emp a[], int n)
{
        int i; 
        for(i=0;i<n;i++)
        {
            printf("Enter empid name and sal");
            scanf("%d%s%lf",&a[i].empid,a[i].name,&a[i].salary);
        }

}
void print_emp(struct emp a[],int n)
{
    
    int i; 
    for(i=0;i<n;i++)
    {
        
        printf("%d %s %lf \n",a[i].empid,a[i].name,a[i].salary);
    }


}

