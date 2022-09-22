#include<iostream>
using namespace std;
class item{
    //static data member..

    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcounts()
    {
        cout<<"count"<<endl;
        cout<<count<<" ";
    }

    static void getcount()
    {
        // cout<<id<<endl; // this is not static data member so error throw
        cout<<"value of count is: "<<count<<endl;
    }
};
int item::count=100;
int main()
{
    item a,b,c;
    // a.getcount();
    // b.getcount();
    a.getdata(11);
    a.getcounts();
    item::getcount();
    b.getdata(12);
    // b.getcount();
    item::getcount();
    return 0;
}
/*class ayushman{
    int x;
    static int y;
    
    public:
    ayushman(int z)
    {
       
        x=z;
        y++;
    }
    static int show()
    {
        // cout<<y<<endl;
        return y;
    }
    void display()
    {
        cout<<"value of x:"<<x<<endl;
        cout<<"value of y:"<<y<<endl;
    }
};
int ayushman::y;
int main()
{
    ayushman a1(10),a3(100);
    a1.display();
    cout<<ayushman::show()<<endl;
    ayushman a2(12);
    a2.display();
    return 0;
}*/