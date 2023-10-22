#include <iostream>
using namespace std;

class College
{
   protected:
   int coll_code;
   string coll_name;
};

class student:public College
{
    string stu_name;
    int roll_no;

    public:
    void stuData()
    {
        cout << "Enter the colleege name: ";
        cin >> coll_name;
        cout << "Enter college code: ";
        cin >> coll_code;
        cout << "Enter student's name: ";
        cin >>stu_name;
        cout<<"Roll no of the student: ";
        cin>>roll_no;
    }

    void putData(){
        cout<<"The name of the college is: "<<coll_name;
        cout<<"college code: "<<coll_code;
        cout<<"student's name:"<<stu_name;
        cout<<"Roll no of the student:"<<roll_no;
    }

};

int main ()
{
    student s;
    s.stuData();
    s.putData();
    return 0;
}