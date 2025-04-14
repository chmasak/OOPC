//Write a program to add two different string by overloading  + operator using dynamic memory allocation and friend  function 
#include <iostream>
#include <cstring> 
using namespace std;
class stringadd {
    char s1[100],s2[100];
public:
    void getstring()
    {
        cout << "Enter the first string: ";
        cin>>s1;
        cout << "Enter the second string: ";
        cin>>s2;
    }
    friend void operator+(stringadd &obj);
    void display() {
        cout << "The concatenated string is: " << s1 << endl;
    }
};
void operator+(stringadd &obj) {
    strcat(obj.s1, obj.s2);
}
int main() {
    stringadd *s=new stringadd[2];
    s->getstring();
    +(*s);
    s->display();
    return 0;
}
