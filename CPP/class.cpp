
#include <iostream>
using namespace std;

class student
{
  private:
        int   rollno;
        char  name[20];
        float percentage;
  public:
    
    void readDetails(){
      cout << "Enter Roll number:";
      cin >> rollno;
      cout << "Enter Name:";
      cin >> name;
      cout << "Enter Percentage:";
      cin >> percentage;
     }
    
    void printDetails(){
      cout << "Student details:\n";
      cout << "RollNo=" << rollno;
      cout << ", Name=" << name;
      cout << ", Percentage=" << percentage;
      cout <<"\n______________";
    }
};

int main()
{
    student std[5];    
    int n, i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0; i<n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].readDetails();
    }
    
    for(i=0; i<n; i++){
        cout << "\nDetails of student " << i+1 << ":\n";
        std[i].printDetails();
    }
    return 0;
}