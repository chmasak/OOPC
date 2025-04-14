//C++ Program to show access to Private Public and  Protected using inheritance 
#include <iostream>
using namespace std;
class abc
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void getdata(int x, int y, int z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout<<"Base class private data: "<<a<<endl;
            cout<<"Base class protected data: "<<b<<endl;
            cout<<"Base class public data: "<<c<<endl;
        }
};
class xyz : public abc
{
    public:
    int d,e,f;
        void getdata(int x, int y, int z)
        {
            abc::getdata(x, y, z);
           // d=a; 
            e=b; 
            f=c; 
        }
        void display()
        {
            abc::display();
            cout<<"Derived class private data: "<<d<<endl;
            cout<<"Derived class protected data: "<<e<<endl;
            cout<<"Derived class public data: "<<f<<endl;
        }
}; 
int main()
{
    xyz obj;
    obj.getdata(1, 2, 3);
    obj.display();
    return 0;
}