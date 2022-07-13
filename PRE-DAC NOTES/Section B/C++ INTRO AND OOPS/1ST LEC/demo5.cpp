//#include<stdio.h> or
#include<cstdio>
int no=10;
int main()
{
    int no=100;
    printf("\n local varibale no=%d [%u] ", no, &no);
    printf("\n global varibale no=%d [%u] ", ::no, &::no);

    return 0;
}