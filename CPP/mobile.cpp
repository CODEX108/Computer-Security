#include <iostream>
using namespace std;

class mobile
{
private:
    int model_no;
    char name[50];

public:
    void readDetails()
    {
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter Model number:";
        cin >> model_no;
    }

    void printDetails()
    {
        cout << "Student details:\n";
       
        cout << ", Name: " << name;
        cout << ", Percentage=" <<model_no;
        cout << "\n______________";
    }
};

int main()
{
    mobile info[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter details of Smartphone " << i + 1 << ":\n";
        info[i].readDetails();
    }

    for (i = 0; i < 10; i++)
    {
        cout << "\nDetails of  Smartphone " << i + 1 << ":\n";
        info[i].printDetails();
    }
    return 0;
}
