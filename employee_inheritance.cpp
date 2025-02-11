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
    void display()
    {
        cout<<"ID: "<<id;
        cout<<"Name: "<<name;
    }
};
class detail: public employee
{
    int sal;
    public:
    void display()
    {
        init();
        display();
        sal=bsal+(0.53*bsal)+(0.3*bsal);
        cout<<"Salary: "<<sal;
    }
};
int main()
{
    detail e;
    e.display();
}