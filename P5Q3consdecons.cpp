//WAP to demonstrate the order of constructor call and destructor call for three different objects.
#include <iostream>
using namespace std;
class abc
{
    public:
    abc()
    {
        cout<<"Constructor called!!!"<<endl;
    }
    ~abc()
    {
        cout<<"Deconstructor called!!"<<endl;
    }
};
int main()
{
    abc a[3];
}