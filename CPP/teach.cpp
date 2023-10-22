#include <iostream>
using namespace std;

class Teacher
{
public:
    string name_teacher;
    int id;
};

class student
{
public:
    string name;
    int roll_no;
};

class info : public Teacher, public student
{
public:
    void Details()
    {
        cout << "Enter the name of the teacher " << endl;
        cin >> name_teacher;
        cout << "Enter the ID: " << endl;
        cin >> id;
        cout << "Enter the student name " << endl;
        cin >> name;
        cout << "Enter the student roll no " << endl;
        cin >> roll_no;
    }

    void printDetalis()
    {
        cout << "The name of the teacher " << name_teacher << endl;
        cout << "The ID: " << id << endl;
        cout << "The student name " << name << endl;
        cout << "The student roll no " << roll_no << endl;
    }
};

int main()
{
    info i;
    i.Details();
    i.printDetalis();
    return 0;
}
