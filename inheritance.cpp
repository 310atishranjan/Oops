//inheritance properties of parent class are inherit by the the child class
#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage()
    {
        return this->age;
    }
    void setweight(int weight)
    {
        this->weight=weight;
        
    }
};
class male:public human{
    public:
    string name;

    public:
    void color()
    {
        cout<<"color is white"<<endl;
    }
   

};
int main()
{
    
    /*
    male man;
   // we can inherit the class human properties through male
    cout<<man.age<<endl;
    cout<<man.getage()<<endl;
    man.setweight(55);
    cout<<man.weight<<endl;

    cout<<man.name<<endl;
    man.color();*/

    // Types of Inheritance...
    /* 1. single
       2. multi-level
       3. Multiple
       4. Hybrid
       5. hyirarchical */
       
    return 0;
}