#include<iostream>
using namespace std;
class A{
    public:
    void func()
    {
        cout<<"funcA is calling"<<endl;
    }
};
class B{
    public:
    void func()
    {
        cout<<"funcB is calling"<<endl;
    }
};
class C:public A,public B{

};
int main()
{
    // function name is same in both class then use ambiguity inheritance
    C obj1;
    obj1.A::func();
    obj1.B::func();
    return 0;
}
