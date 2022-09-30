#include<iostream>
using namespace std;

class student{
    // public:
    private:
    int id;
    char Name;

    //if data member are private then use getter and setter function
    public:
    void setid(int i)
    {
        id=i;
    }
    int getid()
    {
        return id;
    }
    void setName(char N,int pswd)
    {
        if(pswd==10)
        Name=N;
    }
    char getName()
    {
        return Name;
    }
};
int main()
{
    //statically
   /* student ramesh;
    // ramesh.id=11;
    // ramesh.Name='A';
    // cout<<ramesh.id<<endl;
    // cout<<ramesh.Name<<endl;
    ramesh.setid(11);
    ramesh.setName('A',10);
    cout<<ramesh.getid()<<endl;
    cout<<ramesh.getName()<<endl;
    */
    //dynamically Allocation...
    student *ramesh = new student;
    //(*ramesh).setid(125); or
    //cout<<"id is "<<(*ramesh).getid()<<endl;
    ramesh->setid(125);
    cout<<"id is "<<ramesh->getid()<<endl;

    //(*ramesh).setName('k',10); or
    //cout<<"Name is "<<(*ramesh).getName();

    ramesh->setName('k',10);
    cout<<"Name is "<<ramesh->getName()<<endl;

    return 0;
}