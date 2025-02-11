#include <iostream>
using namespace std;
class matrix
{
    int r,c,cr,m1[3][3], m2[3][3], m3[3][3];
    public:
    void get()
    {
        cout<<"Enter elements of matrix 1: ";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>m1[i][j];
            }
        }
        cout<<"Enter elements of matrix 2: ";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>m2[i][j];
            }
        }
    }
    inline void mult()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m3[i][j]=0;
                for(int k=0;k<3;k++)
                {
                    m3[i][j]+=m1[i][j]*m2[i][j];
                }
            }
        }
    }
    void display()
    {
        cout<<endl<<"MATRIX 1"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m1[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl<<"MATRIX 2"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m2[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl<<"MATRIX 3"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m3[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix m;
    m.get();
    m.mult();
    m.display();
}