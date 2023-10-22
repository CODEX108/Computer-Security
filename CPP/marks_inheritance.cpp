// 41.	Write a program to implement multiple inheritance as shown in following Figure
// Accept and display data for one object of class result.

#include<iostream>
#include <iomanip>
using namespace std;

class Subject1{
    

    public:
    float m1;
    void get_m1()
    {
        cout<<"Enter the marks pf first subject\n";
        cin>>m1;
    }

    void display_m1()
    {
        cout<<fixed<<setprecision(3)<<m1<<endl;
    }

};

class Subject2{
   

    public:
    float m2;
    void get_m2()
    {
        cout<<"Enter the marks of second subject\n";
        cin>>m2;
    }

    void display_m2()
    {
        cout<<fixed<<setprecision(3)<<m2<<endl;
    }

};

class Result: public Subject1,public Subject2
 {
     float result;
     public:
     void total()
     {
         result = m1+m2;
         cout<<"The result is "<<result<<endl;
     }

};
int main()
{
    Result r;
    r.get_m1();
    r.get_m2();
    r.display_m1();
    r.display_m2();
    r.total();
    return 0;
}