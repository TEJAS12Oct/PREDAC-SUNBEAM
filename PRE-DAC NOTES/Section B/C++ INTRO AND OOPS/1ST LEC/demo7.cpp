//#include<stdio.h> or
#include<cstdio>
namespace N1
{
    int no=1000;
    int no1=2000;
    namespace N2
    {
        int no=5000;
        int no2=6000;
    }
}
int no=10;
   // using namespace N1;

int main()
{
    int no=100;
    printf("\n local varibale no=%d [%u] ", no, &no);
    printf("\n global varibale no=%d [%u] ", ::no, &::no);

    // namespace_name::variable_name
    printf("\n  varibale from n1 namespace N1::no=%d [%u] ", N1::no, &N1::no);
    printf("\n  varibale from n1 namespace N1::no1=%d [%u] ", N1::no1, &N1::no1);
   using namespace N1;

    printf("\n  varibale from n1 namespace no1=%d [%u] ", no1, &no1);
    printf("\n  local no=%d [%u] ", no, &no);
    printf("\n  varibale from n1 namespace N1::no=%d [%u] ", N1::no, &N1::no);

    // outer_namespace_name::inner_namespace_name::variable_name
    printf("\n  varibale from N1::N2 namespace N1::N2::no=%d [%u] ", N1::N2::no, &N1::N2::no);
    printf("\n  varibale from N1::N2 namespace N1::N2::no2=%d [%u] ", N1::N2::no2, &N1::N2::no2);

    //using namespace N1::N2;
          // or
    using namespace N1;
    using namespace N2;
    printf("\n  varibale from N1::N2 namespace no2=%d [%u] ", no2, &no2);
    printf("\n  local varibale  namespace no=%d [%u] ", no, &no);



    return 0;
}