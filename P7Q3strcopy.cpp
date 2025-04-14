// Write a program to perform string copy operation by  overloading = operator using dynamic memory allocation. 
#include <iostream>
#include <cstring> 
using namespace std;
class stringcopy
{
     char s1[100], s2[100];
    public:
    void getstring()
    {
        cout << "Enter the string to be copied: ";
        cin >> s1;
    }
    void operator =(stringcopy &obj)
    {
        strcpy(s2, obj.s1);
    }
    void display()
    {
        cout << "The copied string in another variable is: " << s2 << endl;
    }
};
int main()
{
    stringcopy *s= new stringcopy;
    s->getstring();
    stringcopy temp;
    temp = *s;         
    temp.display(); 
}