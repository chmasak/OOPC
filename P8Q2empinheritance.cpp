//. C++ program to read and print employee information  using single, multilevel inheritance. 
#include <iostream>
#include <string>
using namespace std;
class employee
{
    int id;
    char name[20];
    protected:
        int bsal;
    public:
    void init()
    {
        cout<<"Enter ID, name and basic salary: ";
        cin>>id>>name>>bsal;
    }
    void display1()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
//single inheritance
class saldetail: public employee
{
    int sal;
    public:
    void display2()
    {
        init();
        display1();
        sal=bsal+(0.53*bsal)+(0.3*bsal);
        cout<<"Salary: "<<sal;
    }
};
//multilevel inheritance
class detail: public saldetail
{
    public:
    void display()
    {
        display2();
    }

};
int main()
{
    detail e;
    e.display();
}