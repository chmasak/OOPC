//Write a program to add two different string by overloading  + operator using dynamic memory allocation. 
#include <iostream>
#include <cstring>
using namespace std;
class stringadd
{
    char s1[100], s2[100];
    public:
    void getstring()
    {
        cout << "Enter the string: ";
        cin >> s1;
        cout << "Enter the second string: ";
        cin >> s2;
    }
    void operator +()
    {
        strcat(s1,s2); 
    }
    
    void display()
    {
        cout << "The concatenated string is: " << s1 << endl;
    }
};
int main()
{
    stringadd *s=new stringadd[2];
    s->getstring();
    +(*s);
    s->display();
    return 0;
}