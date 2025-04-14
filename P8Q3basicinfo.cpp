//Derive a class physical_fit from basic_info from base class basic_info and Display all the information  using object of derived class.  
#include <iostream>
#include <string>
using namespace std;
class basic_info
{
    int roll;
    char name[20], gender;
    public:
    void getdata()
    {
        cout<<"Enter roll, name and gender: ";
        cin>>roll>>name>>gender;
    }
    void display()
    {
        cout<<"ROLL NO.: "<<roll<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"GENDER: "<<gender<<endl;
    }
};
class physical_fit: public basic_info
{
    float height, weight;
    public:
    void getdata()
    {
        basic_info::getdata();
        cout<<"Enter height and weight: ";
        cin>>height>>weight;
    }
    void display()
    {
        basic_info::display();
        cout<<"HEIGHT: "<<height<<endl;
        cout<<"WEIGHT: "<<weight<<endl;
    }
};
int main()
{
    physical_fit p;
    p.getdata();
    p.display();
}