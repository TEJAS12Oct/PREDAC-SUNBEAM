#include<iostream>
using namespace std;
namespace NMaths
{
    class Maths
    {
        public:
        // class members
            static int sum(int n1, int n2)
            {
                return n1+n2;
            }
            static int minus(int n1, int n2)
            {
                return n1-n2;
            }
            // instance members
             int multiply(int n1, int n2)
            {
                return n1*n2;
            }

    };

} //end of maths namespace
using namespace NMaths;
int main()
{
    int result= Maths::sum(10,20);
    cout<<"sum using class name = "<<result<<endl;

     result= Maths::minus(10,20);
    cout<<"miuns using class name ="<<result<<endl;

    //result= Maths::multiply(10,20);   // error 

    Maths obj1;
     result= obj1.sum(10,20);
    cout<<"sum using object name = "<<result<<endl;

     result= obj1.minus(10,20);
    cout<<"miuns using object name = "<<result<<endl;
      
      result= obj1.multiply(10,20);
    cout<<"multiply using object name = "<<result<<endl;
    return 0;
}
// 