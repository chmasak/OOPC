#include <iostream>
using namespace std;
class bank
{ 
int amt, bal;
public:
void init()
{
    cout<<"Enter an initial balance: ";
    cin>>bal;
    cout<<"\nBalance: "<<bal;
}
void withdraw()
{
    cout<<"Enter an amount to withdraw: ";
    cin>>amt;
    if (amt>bal)
    {
        cout<<"\nCannot withdraw!!";
    }
    else
    {
        cout<<"\nAmount: "<<amt;
        bal=bal-amt;
        cout<<"\nBalance: "<<bal;   
    }
}
void display()
{
    cout<<"\nBalance: "<<bal;
}
void deposit()
{
    cout<<"Enter sum to deposit: ";
    cin>>amt;
    cout<<"\nAmount: "<<amt;
    bal=bal+amt;
    cout<<"\nBalance: "<<bal; 
}
};
int main()
{
    bank b;
    int ch, ans;
    ans=1;
    while (ans==1)
    {
        cout<<"Enter choice: \n";
        cout<<"1.Init, 2.Withdraw, 3.Display, 4.Deposit: \n";
        cin>>ch;
        switch(ch)
        {
            case 1: { b.init();
                      break;    }
            case 2: { b.withdraw();
                      break;    }
            case 3: { b.display();
                      break;    }
            case 4: { b.deposit();
                      break;    }
            default: { cout<<"\nWrong input"; }
        }
        cout<<"\nWanna continue?(1 for yes/ 0 for no): ";
        cin>>ans;
    }
    if (ans==0)
    {
        printf("Terminating program!!");
    }
}