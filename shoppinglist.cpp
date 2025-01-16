#include <iostream>
using namespace std;
class shopping
{
    int cd, k=0;
    float pr, sum=0.0;
    int list[100];
    public:
    void inputitem()
    {
        cout<<"Enter the item code:";
        cin>>cd;
        cout<<"Enter the price:";
        cin>>pr;
        list[k]=cd;
        sum+=pr;
        k++;
    }
    void removeitem()
    {
        cout<<"Enter code of item to delete: ";
        cin>>cd;
        cout<<"Enter the price: ";
        cin>>pr;
        for(int i=0; i<k;i++)
        {
            if (list[i]==cd)
            {
                sum-=pr;
            }
        }
    }
    void display()
    {
        cout<<"Total price: "<<sum;
    }
};
int main()
{
    shopping s;
    int n, ans=1, ch;
    float sum=0.0, newl[100];
    s.inputitem();
    while (ans==1)
    {
        cout<<"\nWanna continue?(1 for yes/0 for no)";
        cin>>ans;
        if (ans==1)
        {
            cout<<"\nEnter choice, 1.Add item, 2.Delete item: ";
            cin>>ch;
            if (ch==1)
            {
                s.inputitem();
            }
            else
            {
                s.removeitem();
            }
        }
    }
    s.display();
}