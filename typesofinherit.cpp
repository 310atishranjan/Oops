#include<iostream>
using namespace std;
//single inheritance
/*class Animal{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{

};*/
// Multilevel Inheritance
/*class Animal{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
   
};
class germanshepherd:public Dog{

};*/
//Multiple Inheritance
/*class Animal{
    public:
    int age;
    int weight;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};
class Dog{
   public:
   void bark()
   {
    cout<<"barking"<<endl;
   }
};
class germanshepherd:public Animal,public Dog{

};*/

//hierarchical type...one class serve as parent class for more than one class
/*class A{
    public:
    void func1()
    {
        cout<<"func1 is calling"<<endl;
    }
};
class B:public A{
    public:
    void func2()
    {
        cout<<"func2 is calling"<<endl;
    }
};
class C:public A{
    public:
void func3()
    {
        cout<<"func3 is calling"<<endl;
    }
};*/
// Hybrid inheritance... combination of more than one type inheritance
class A{
    public:
    void func1()
    {
        cout<<"func1 is calling"<<endl;
    }
};
class B:public A{
    public:
    void func2()
    {
        cout<<"func2 is calling"<<endl;
    }
};
class D{
    public:
    void func4()
    {
        cout<<"func4 is calling"<<endl;
    }
};
class C:public A,public D{
    public:
void func3()
    {
        cout<<"func3 is calling"<<endl;
    }
};
int main()
{ 
    //single inheritance
    /*Dog D1;
    D1.speak();
    cout<<D1.age<<endl;*/

    //Multilevel inheritance..
    /*germanshepherd G1;
    G1.speak();*/

    //Multiple Inheritance
    /*germanshepherd G1;
    G1.speak();
    G1.bark();*/

    //hierarchical inheritance
    /*A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();
    */
   //hybrid inheritance
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    D obj4;
    obj4.func4();

    C obj3;
    obj3.func1();
    obj3.func3();
    obj3.func4();
    return 0;
}