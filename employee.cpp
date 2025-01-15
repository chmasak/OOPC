#include <iostream>
using namespace std;
class employee
{
    int id,sal,ns;
    char nm[30];
    public:
        void input()
        {
            cout<<"Enter the name:";
            cin>>nm;
            cout<<"Enter the id:";
            cin>>id;
            cout<<"Enter the basic salary:";
            cin>>sal;
        }
        void output()
        {
            cout<<"Name: "<<nm<<"\n";
            cout<<"ID: "<<id<<"\n";
            ns=((0.52*sal)+sal) + (sal-(0.3*sal));
            cout<<"Net salary: "<<ns<<"\n\n";
        }
};
int main()
{ 
  int n;
  cout<<"enter number of employees: ";
  cin>>n;
  employee emp[n];
  for(int i=0;i<n;i++)
  {
  emp[i].input();
  }
  cout<<"\nEmployee details: \n";
  for(int i=0;i<n;i++)
  {
        cout<<"Employee:\n "<<i+1;
        emp[i].output();
        cout<<"\n";
  }
}
