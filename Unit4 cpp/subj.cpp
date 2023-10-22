#include<iostream>
using namespace std;

class subject1{
public:
float m1;
};

class subject2{
    public:
    float m2;
};

class Result:public subject1,public subject2
{
    public:
  float total;
  
   void getData()
   {
       cout << "Enter the marks of subject 1: " << endl;
        cin >> m1;
        cout << "Enter the marks of subject 2: " << endl;
        cin >> m2;
    }

     void total_m (){
         total=m1+m2;
     }
    void printDetalis()
    {

        cout << "The marks of subject 1 are: " << m1 << endl;
        cout << "The marks of subject 2 are :" << m2 << endl;
        cout << "The total is: " <<total<<endl;
    }
};

int main ()
{
    Result r;
    r.getData();
    r.total_m();
    r.printDetalis();
    return 0;
}
   







