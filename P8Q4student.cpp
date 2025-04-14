//Design three classes , base class STUDENT, and derived class  EXAM and RESULT. Write a program to model this relationship. 
#include <iostream>
#include <string>
using namespace std;
class student
{
    int roll;
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter roll and name: ";
        cin>>roll>>name;
    }
    void display()
    {
        cout<<"ROLL NO.: "<<roll<<endl;
        cout<<"NAME: "<<name<<endl;
    }
};
class exam: public student
{
    int total=0;
    float mks[6];
    public:
    void getdata()
    {
        student::getdata();
        cout<<"Enter marks in 6 subjects: ";
        for(int i=0; i<6; i++)
            {
                cin>>mks[i];
                total+= mks[i];
            }
    }
    void display()
    {
        student::display();
    }
    int totalmarks()
    {
        return total;
    }
};
class result: public exam
{
    float perc;
    char grade;
    public: 
    void getdata()
    {
        exam::getdata();
        perc=exam::totalmarks()/6.0;
        if(perc>=90)
            grade='A';
        else if(perc>=80 && perc<90)
            grade='B';
        else if(perc>=70 && perc<80)
            grade='C';
        else if(perc>=60 && perc<70)
            grade='D';
        else if(perc>=50 && perc<60)
            grade='E';
        else
            grade='F';
    }
    void display()
    {
        exam::display();
        cout<<"Total Marks: "<<exam::totalmarks()<<endl;
        cout<<"Percentage: "<<perc<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.display();
}