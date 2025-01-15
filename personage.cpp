#include <iostream>
using namespace std;
class person
{
    int ag;
    char nm[30];
    public:
        void name()
        {
            cout<<"Enter the name:";
            cin>>nm;
            cout<<"Name: "<<nm<<"\n\n";
        }
        void age()
        {
            cout<<"Enter the age:";
            cin>>ag;
            cout<<"Age: "<<ag;
        }
};
int main()
{
  person prs;
  prs.name();
  prs.age();
}
