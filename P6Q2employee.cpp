// Create a class employee with data members emp_id, name, slary and having functions void get() for input and void display() for displaying the employee details with their salary in descending order. Take the details of 5 employees with help of new operator.
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int emp_id;
    string name;
    float salary;
    public:
    void get() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout  << emp_id <<"\t"<<name <<"\t"<<salary<<"\n\n";

    }

    float getSalary() const {
        return salary;
    }
};

int main() {
    Employee* employees = new Employee[5];
    for (int i = 0; i < 5; ++i) 
    {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].get();
    }
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = 0; j < 5 - 1 - i; ++j) {
            if (employees[j].getSalary() < employees[j + 1].getSalary()) {
                Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    cout << "\nDisplaying Employee Details (Sorted by Salary in Descending Order):\n";
    for (int i = 0; i < 5; ++i) {
        employees[i].display();
    }
}