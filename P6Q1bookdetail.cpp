//Create a class book with data members book_id,book_name & publisher_name with functions void get() to take values, and void display() to print the values, use dynamic memory allocation to take input for 5 books and display them.
#include <iostream>
using namespace std;
class book
{
    int id;
    char bname[30],pname[30];
    public:
    void get()
    {
        cout<<"Enter book id, book name and publisher's name: ";
        cin>>id>>bname>>pname;
    }
    void display()
    {
        cout<<"Book ID: "<<id<<endl;
        cout<<"Book name: "<<bname<<endl;
        cout<<"Publisher name: "<<pname<<"\n\n";
    }
};
int main()
{
    book *b=new book[5];
    for(int i=0;i<5;i++)
    {
        b[i].get();
    }
    for(int i=0;i<5;i++)
    {
        b[i].display();
    }
}