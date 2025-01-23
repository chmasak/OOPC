#include <iostream>
using namespace std;
class employee
{
    float ag;
    char nm[40];
    public:
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>nm;
        cout<<"Enter age: ";
        cin>>ag;
    }
    void putdata()
    {
        cout<<"Name: "<<nm<<"\n";
        cout<<"Age: "<<ag<<"\n";
    }
};
int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\nEMPLOYEE "<<i+1<<"\n";
        e[i].putdata();
    }
}
