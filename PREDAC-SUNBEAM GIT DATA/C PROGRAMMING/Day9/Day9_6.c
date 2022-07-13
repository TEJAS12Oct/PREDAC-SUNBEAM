#include<stdio.h> 

// variable declared inside the function --> local variable 
void sumpro(int a, int b); 
int main()
{
    int a =10,b=3; 
    //auto int b;  // local variable 
    int c; // local/auto  // c is local to the main() 
    printf("%d",c); // garbage --> 0 

    //sumpro(a,b);  // fn call 
    //printf("\n a = %d",a); // 10
    //printf("\n b = %d",b); // 3 
    {
        int c =100; 
        printf("\n %d",c); 
        {
            int c = 500; 
            printf("\n %d",c);
            {
                int c = 1000; 
                printf("\n %d",c);
            }
            printf("\n %d",c);// 500  
        }
        printf("\n %d",c);// 100  
    }


    return 0; 
}

//             10      3 
void sumpro(int a, int b)
{
    int ps,pp; 
    // ps and pp are local/auto variable 
    // a,b,ps,pp will be created when sumpro function is called 

    // ps and pp are declared inside the fn 
    // fn --> sumpro --> local variable 

    ps = a + b; // 10 + 3 --> 13 
    pp = a * b; // 10 * 3 --> 30 
    printf("\n sum = %d prod=%d",ps,pp);  
    a++;  // 10-->11
    b++; //  3 --> 4 
}