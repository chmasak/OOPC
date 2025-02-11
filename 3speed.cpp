#include <iostream>
using namespace std;
class truck;
class car
{
    int sp;
    public:
    void get()
    {
        cout<<"Enter the speed: ";
        cin>>sp;
    }
    friend void cmp(car, truck);
};
class truck
{
    int sp;
    public:
    void get()
    {
        cout<<"Enter the speed: ";
        cin>>sp;
    }
    friend void cmp(car , truck );
};
void cmp(car c, truck t)
{
    if (c.sp>t.sp)
    {
        cout<<"Car is faster.";
    }
    else
    {
        cout<<"Truck is faster.";
    }
}
int main()
{
    car c;
    truck t;
    int ans=1;
    do
    {
        c.get();
        t.get();
        cmp(c,t);
        cout<<"\nWanna continue?(1/0) ";
        cin>>ans;
    } 
    while (ans==1);
    
}
