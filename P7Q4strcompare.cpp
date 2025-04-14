//Write a program to perform string compare operation by  overloading == operator using dynamic memory  allocation.
#include <iostream>
#include <cstring> 
using namespace std;
class String
{
    char s[20];
    public:
    void getString()
    {
        cout << "Enter the string: ";
        cin >> s;
    }  
    friend int operator==(String s1,  String s2)
    {
       if (strcmp(s1.s,s2.s)==0)
       {
        return 1;
        }
        else
        {
        return 0;
        }
    }
};
int main()
{
    String  a,b;
    a.getString();
    b.getString();
    if (a==b)
    {
        cout<<"String are not equal!!";
    }
    else
    {
        cout<<"Strings are not equal!!";
    }
}