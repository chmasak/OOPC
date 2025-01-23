#include <iostream>
using namespace std;
class TIME
{
    int hr,min;
    public:
    void gettime()
    {
        cout<<"Enter hour: ";
        cin>>hr;
        cout<<"Enter minute: ";
        cin>>min;
    }
    void puttime()
    {
        cout<<"Hour: "<<hr<<"\n";
        cout<<"Minute: "<<min<<"\n";
    }
    void sum(TIME t1 ,TIME t2)
    {
        int tmin;
        tmin=(t1.hr*60+t1.min)+(t2.hr*60+t2.min);
        hr=tmin/60;
        min=tmin%60;
        cout<<hr<<" hours and "<<min<<" minutes. ";
    }
};
int main()
{
    TIME t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t1.puttime();
    t2.puttime();
    t3.sum( t1 , t2);
}