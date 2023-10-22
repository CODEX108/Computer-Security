#include <iostream>
using namespace std;

//base Class--> jise nayi class ko janm diya ja raha hai
class Employee
{

protected:
    int emp_id;
    char name[10];
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/
//Derived Class--->janm lene wali class   
// Creating a  Emp_info class derived from Employee Base class
class Emp_info : public Employee
{
    float basic_salary;

public:
    void empData()
    {
        cout << "Enter the employee id";
        cin >> emp_id;
        cout << "Enter name";
        cin >> name;
        cout << "Enter basic salary";
        cin >> basic_salary;
    }

    void putData()
    {
        cout << "\nThe employee id is: " << emp_id;
        cout << "\nName of the employee is: " << name;
        cout << "\nBasic Salary of the employee is: " << basic_salary;
    }
};

int main()
{
    Emp_info e;
    e.empData();
    e.putData();
    return 0;
}



//Derived Class--->janm lene wali class   syntax
