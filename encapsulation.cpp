//encapsulation Wrapping up a data member and function
// data member are private
// it is information or data  hiding
/*Adv
security increases by data hiding
code reusability
help in->unit testing*/
#include<iostream>
using namespace std;
class student{
    //data member
    private:
    string name;
    int age=6;
    int height;

    //function
    public:
    int getage()
    {
        return this->age;
    }
};
int main()
{
    student first;
    cout<<first.getage()<<endl;
    return 0;
}