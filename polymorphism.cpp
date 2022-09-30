//polymorphism: Many Forms 
//types:compile-time polymorphism,Run-time polymorphism...
//compile-time->1.Function Overloading,2.Operator Overloading
#include<iostream>
using namespace std;
//compile-time polymorphism:static polymorphism
//Function Overloading
/*class A{
    
    public:
    void Hello()
    {
        cout<<"Hello1"<<endl;
    }
    void Hello(int n)//same function use then input parameter change
    {
        cout<<"Hello2"<<endl;
    }
    int Hello(string n)
    {
        cout<<"Hello3"<<endl;
        return 1;
    }
};*/
//Operator Overloading..
/*class B
{
    public:
    int a;
    int b;
    public:
    void operator +(B &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        cout<<value2-value1<<endl;
    }
};*/
//Run Time polymorphism:Dynamic polymorphism..
//method overriding
class Animal{
    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak()
    {
        cout<<"barking"<<endl;
    }
};
int main()
{
    /*A obj1;
    obj1.Hello();*/

    /*B obj1,obj2;
    obj1.a=5;
    obj2.a=10;
    obj1+obj2;*/

    Dog d1;
    d1.speak();
    Animal A1;
    A1.speak();
    return 0;
}