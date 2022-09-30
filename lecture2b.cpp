#include<iostream>
using namespace std;
class student{
    protected:
    int id;
    int code;

    public:
    // int getid(){
    //     return this->id;
    // }
    // void setid(int id)
    // {
    //     this->id=id;
    // }
};
class student1: public student{
    public:
void setdata(int value)
{
    id=value;
}
int getdata()
{
    return id;
}
};
int main()
{
    // student m1;
    // m1.setid(15);
    // cout<<m1.getid()<<endl;

    student1 m2;
    m2.setdata(11);
    cout<<m2.getdata()<<" ";
    return 0;
}