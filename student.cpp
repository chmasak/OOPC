#include <iostream>
using namespace std;
class student
{
    int id;
    char nm[40];
    float per;
    public:
    void get()
    {
        cout<<"Enter id, name, percentage: ";
        cin>>id>>nm>>per;
    }
    void put()
    {
        cout<<"ID: "<<id<<endl<<"Name: "<<nm<<endl<<"Percentage: "<<per<<endl<<endl;
    }
    int getid()
    {
        return id;
    }
    bool search(int newid, student s[], int size)
    {
        int flag;
        for(int i=0; i<size; i++)
           {
              if (s[i].id==newid)
                 {
                    flag=1;
                    //something
                    return 1;
                    break;
                }
            }
        if (flag==0)
           {
               return 0;
           }
    }
    void adddata()
    {

    }
    void deldata()
    {}
    void updatedata()
    {}
};
int main()
{
    int size, newid, ch, ans=1;
    cout<<"Enter number of students: ";
    cin>>size;
    student s[size];
    //student *s= new student[size];
    for (int i=0; i<size;i++)
    {
        s[i].get();
    }
    for (int i=0; i<size;i++)
    {
        s[i].put();
    }
    //options- add, delete, update
    do
    {
    cout<<"Enter ID to search: ";
    cin>>newid;
    cout<<"1. Add data \n 2. Delete data \n 3. Update data\nEnter choice: ";
    cin>>ch;
    student *s= new student[1];
    switch(ch)
    {
        case 1: {
            cout<<"Enter ID to search: ";
            cin>>newid;
            if (s->search(newid,s,size)==1)
            {
                cout<<"ID found!!, cannot add again!"<<endl;
            }
            else
            {
                s[size+1].get();
                cout<<"Data added successfully!!";
            }
            break;
        }
        default: {cout<<"Wrong choice!!";}


        /*case 2: //delete
        case 3: //update*/
    }

    }
     while (ans==1);
    
    

}
/*void search()
{
int flag;
for(i=0; i<size; i++)
{
    if (s[i].getid==newid)
    {
        flag=1;
        //something
        break;
    }
}
if (flag==0)
{
    cout<<"ID not found";
}
}*/