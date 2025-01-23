#include <iostream>
#include <cmath>
using namespace std;
class root
{
    int x1,x2;
    public:
    void calc(int a, int c, int b=5)
    {
        int d=(b*b)-(4*a*c);
        x1=(-b-sqrt(d))/2*a;
        x2=(-b+sqrt(d))/2*a;
        cout<<"Roots are "<<x1<<" and "<<x2;
    }
};
int main()
{
    root r;
    int a,c;
    cout<<"Enter value of coefficient of x^2:";
    cin>>a;
    cout<<"Enter value of constant:";
    cin>>c;
    r.calc(a,c);
}
