//#include<stdio.h> or
#include<cstdio>
namespace N1
{
    int no=1000;
    int no1=2000;
}
int no=10;
    using namespace N1;

int main()
{
    int no=100;
    printf("\n local varibale no=%d [%u] ", no, &no);
    printf("\n global varibale no=%d [%u] ", ::no, &::no);

    // namespacename::variable_name
    printf("\n  varibale from n1 namespace N1::no=%d [%u] ", N1::no, &N1::no);
    printf("\n  varibale from n1 namespace N1::no1=%d [%u] ", N1::no1, &N1::no1);
    using namespace N1;

    printf("\n  varibale from n1 namespace no1=%d [%u] ", no1, &no1);
    printf("\n  local no=%d [%u] ", no, &no);
    printf("\n  varibale from n1 namespace N1::no=%d [%u] ", N1::no, &N1::no);


    return 0;
}