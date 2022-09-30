#include<iostream>
using namespace std;
class A{
    int data,num;
    public:
    void setvalue(int x,int y)
    {
        data=x;
        num=y;
    }
    friend void add(A);
};
void add(A o1)
{
    cout<<o1.data+o1.num<<endl;
}
int main()
{
    A obj1;
    obj1.setvalue(10,10);
    add(obj1);
    return 0;
}