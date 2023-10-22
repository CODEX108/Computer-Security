#include <iostream>
using namespace std;

class College_Student
{
public:
    int College_code;
    int student_id;
};

class test : public virtual College_Student            //virtual base class 
{
public:
    float percentage;
};

class sports : public virtual College_Student
{
public:
    int grade;
};

class Result : public test, public sports
{
public:
    void setData()
    {
        cout << "Enter the college code: " << endl;
        cin >> College_code;
        cout << "Enter the college id: " << endl;
        cin >> student_id;
        cout << "Enter the percentage: " << endl;
        cin >> percentage;
        cout << "Enter the grade: " << endl;
        cin >> grade;
    }

    void getData()
    {
        cout << "The college code: " <<College_code<< endl;
        cout << "The college id: " <<student_id<< endl;
        cout << "The percentage: " <<percentage<< endl;
        cout << "The grade: " <<grade<< endl;
    }



};

int main()
{
   Result r;
   r.setData();
   r.getData();
    return 0;
}