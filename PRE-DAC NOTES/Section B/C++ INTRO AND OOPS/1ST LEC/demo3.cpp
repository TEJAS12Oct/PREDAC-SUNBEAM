#include<stdio.h>
#pragma pack(1)
struct emp
{
    private:  // variable / data member /field 
        int empno;
        char name[10];
        float sal;

    public:
        //e formal argrument
        //member function or method
    void acceptEmpinfo()
    {

        printf("\n enter empno::");
        scanf("%d", &empno);
    
        printf("\n enter emp name::");
        scanf("%s", name);
   
        printf("\n enter sal::");
        scanf("%f", &sal);
        return;
    }
    void displayEmpinfo()
    {
        // e->sal=-10000;
        printf("\n empno=%d", empno);
        printf("\n empname=%s",name);
        printf("\n emp sal=%.2f",sal);
        return;
    }
};


int main()
{
    // struct emp is user defined data type 
    // e1 is variable/object of user defined data struct emp
   emp e1;// struct emp e1; //local var

   

    printf("\n enter emp infomation::\n");
    e1.acceptEmpinfo(); //acceptEmpinfo(&e1);  // e actual argrument

    printf("\n emp infomation::\n");
    e1.displayEmpinfo();//displayEmpinfo(&e1);
    
  // e1.sal=-10000; // not allowed sal private
    
    printf("\n emp infomation::\n");
    e1.displayEmpinfo();//displayEmpinfo(&e1);
   
    return 0;
}
