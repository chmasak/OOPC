//WAP to demonstrate the usage of copy constructor.
#include <iostream>
using namespace std;
class abc
{
    int id;
    public:
    abc()
    {
        id=20;
    }
    abc(abc &a)
    {
        id=a.id;
    }
    void display()
    {
        cout<<id<<endl;
    }
};
int main()
{
    cout<<"Original: ";
    abc a1;
    a1.display();
    cout<<"Copy: ";
    abc a2(a1);
    a2.display();
}