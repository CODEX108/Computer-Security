// 39.	Write a program to declare a class staff having data members as name and post. Accept and display data for five staff members. (Using array of object).

#include <iostream>
using namespace std;

class Staff{
    private:
    char name[20];
    char post[20];
    public:
    void getData()
    {
      cout << "Enter the Name:";
      cin >> name;
              cout << "Enter the post:";
      cin >> post;
    }
    void displayData()
    {
      cout << "Staff details:\n";
      cout << ", Name: " << name;
      cout << ", Post: " << post;
      cout <<"\n______________";
    }
};

int main()
{
    Staff stf[30];
    int i;
   cout<<"Enter data of any 5 staff members\n";
   for ( i = 0; i <5; i++)
   {
       cout<<"Enter details of staff"<<i+1<<":\n";
       stf[i].getData();
   }
   
   for(i=0; i<5; i++){
        cout << "\nDetails of student " << i+1 << ":\n";
        stf[i].displayData();
    }
 
  return 0 ;
}
