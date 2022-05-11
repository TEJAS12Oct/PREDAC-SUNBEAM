#include<iostream>
using namespace std;
namespace NFirendDemo
{
    class FriendDemo
    {
        private:
            int a;
            int b;
        public:
            FriendDemo()
            {
                this->a=10;
                this->b=20;
            }
            void Print()
            {
                cout<<"this->a="<<this->a<<endl;
                cout<<"this->b="<<this->b<<endl;

            }
            ~FriendDemo()
            {
                this->a=0;
                this->b=0;
            }
            friend void Sum();

    };
    void Sum()
    {
        FriendDemo obj;
        int result=obj.a+obj.b;
        cout<<"result="<<result<<endl;
    }

}// end of namespace NFrinedDemo
using namespace NFirendDemo;
int main()
{
    Sum();
    return 0;

}
// friend class --> Linked list and tree