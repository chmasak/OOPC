#include <iostream>
using namespace std;
class sample
{
    int a,b;
    public:
    void setval()
    {
        cout<<"Enter the value: ";
        cin>>a;
        cout<<"Enter the second value: ";
        cin>>b;
    }
    friend void sum(sample p);
};
void sum(sample p)
{
    int s= p.a+p.b;
    cout<<"Sum: "<<s;
}
int main()
{
    sample p;
    p.setval();
    //q.setval();
    sum(p);
}
