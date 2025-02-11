#include <iostream>
using namespace std;
class student
{
    int id;
    char name[20];
    protected:
    int mks[5],sum=0;;
    public:
    void get()
    {
        int i;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks of 5 subjects: ";
        for( i=0;i<5;i++)
        {
            cin>>mks[i];
            sum+=mks[i];
        }

    }
    void displaye()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"NAME: "<<name<<endl;
    }
};
class result: public student
{
    float per;
    char grade;
    public:
    void calc()
    {
        get();
        displaye();
       per=sum/5;
       if (per>90.0 && per<=100.0)
       {
            grade='A';
       }
       else if (per>70.0 && per<=90.0)
       {
            grade='B';
       }
       else if (per>50.0 && per<=70.0)
       {
            grade='C';
       }
       else
       {
            grade='D';
       }
       cout<<"Percentage: "<<per<<endl;
       cout<<"Grade: "<<grade;
    }
};
int main()
{
    result s;
    s.calc();

}