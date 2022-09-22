//Abstraction: Implementation Hiding show useful information


#include<iostream>
using namespace std;
/*class implement{
    private:
    int a;
    int b;

    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};*/
class A{
    private:
    int x=10;
    public:
    friend class B;
};
class B{
    public:
    void display(A &t)
    {
        cout<<t.x<<endl;
    }
};
int main()
{
   /* implement obj;
    obj.set(10,20);
    obj.display(); */

    A A1;
    B B1;
    B1.display(A1);
    return 0;
}
    
