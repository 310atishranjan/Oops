#include<iostream>
using namespace std;

class student{
    public:
    int id;
    char name;
    //static keyword
    static int  time;
    //constructor called
    student(){
        cout<<"Constructor called" <<endl;
        
    }

    //parameterised constructor
    student(int id,char name)
    {
        this->id=id;
        this->name=name;
    }
    //copy Constructor
    student(student &temp)
    {
        this->id=temp.id;
        this->name=temp.name;
    }
    //static member...
    static int random()
    {
        return time;
    }
    //destructor.. statically
    ~student()
    {
        cout<<"destructor called"<<endl;
    }
   int getid()
   {
    return id;
   }
   char getname()
   {
    return name;
   }
    void print()
    {
        cout<<"id is "<<id<<endl;
        cout<<"name is "<<name<<endl;
    }
};
int student :: time=4;//static 
int main()
{
    cout<<student::time<<endl;
    cout<<student::random()<<endl;
    //object creation... statically
    /*student ramesh;//ramesh.student()this type constructor called by default..

    student *golu = new student;//same constructor called*/

    //parameterised constructor
    student ramesh(15,'A');
    //cout<<ramesh.getid()<<" "<<ramesh.getname()<<endl;
    ramesh.print();

    student *golu = new student(15,'A');
    //cout<<"id and name is "<< golu->getid()<<endl;
    golu->print();
    delete golu;

    student temp(14,'h');
    temp.print();

    student atish(21,'A');
    atish.print();
    student g(atish);//Copy Constructor Called..
    g.print();


   
    return 0;
}