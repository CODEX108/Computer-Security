// Write a program to define a class student having data members name and roll no.
//  Accept and display data for one object.

#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    char name[20];

public:
    void readDetails()
    {
        cout << "Enter Roll number:";
        cin >> rollno;
        cout << "Enter Name:";
        cin >> name;
    }

    void printDetails()
    {
        cout << "--->Student details<---\n";
        cout << "RollNo: " << rollno;
        cout << "Name: " << name;
        cout << "\n______________";
    }
};

int main()
{
    student std1;
    cout << "Enter details of student "
         << "\n";
    std1.readDetails();
    cout << "\nDetails of student "
         << ":\n";
    std1.printDetails();
    return 0;
}