//Create a base class called SHAPE.  Derive two specific classes called  TRIANGLE and RECTANGLE. Design a program that will accept driven of a  TRIANGLE or RECTANGLE interactively and display the area. 
#include <iostream>
using namespace std;
class SHAPE 
{
protected:
double a, b;
public:
    void getdata() {
        cout << "Enter dimensions: ";
        cin >> a >> b;
    }
    virtual void display() {
        cout << "This is a generic shape." << endl;
    }
};
class RECTANGLE : public SHAPE {
public:
    void display() 
    {
        SHAPE::getdata();
        SHAPE::display();
        cout << "Area of Rectangle: " << a * b << endl;
    }
};
class TRIANGLE : public SHAPE {
public:
    void display() 
    {
        SHAPE::getdata();
        SHAPE::display();
        cout << "Area of Triangle: " << 0.5 * a * b << endl;
    }
};
int main() 
{
    char choice,ans;
    do
    {
        cout << "Enter 'r' for Rectangle or 't' for Triangle: ";
        cin >> choice;    
        if (choice == 'r' || choice == 'R') 
        {
            RECTANGLE r;
            r.display();
        } 
        else if (choice == 't' || choice == 'T')
        {
            TRIANGLE t;
            t.display();
        } 
        else
        {
            cout << "Invalid choice!" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> ans;
    }
     while (ans=='y'||ans=='Y');
    cout << "Exiting program." << endl;
}