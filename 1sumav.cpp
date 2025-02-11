#include <iostream>
using namespace std;
class sum
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter first value: ";
        cin>>a;
        cout<<"Enter second value: ";
        cin>>b;
    }
    inline void display()
    {
        cout<<"Sum: "<<a+b<<endl;
        cout<<"Average: "<<(a+b)/2<<endl;
    }
};
int main()
{
    sum s;
    s.getdata();
    s.display();
}