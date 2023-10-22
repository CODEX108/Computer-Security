#include <iostream>
using namespace std;
class Distance
{
    int feet, inches;

public:
    void accept()
    {
        cout << "\nEnter distance in feet and inches";
        cin >> feet >> inches;
    }
    void display()
    {
        cout << "\nDistance is:-";
        cout << "\nFeet = " << feet;
        cout << "\nInches = " << inches;
    }
    void operator-()
    { 
        feet--;
        inches--;
    }
};


int main()
{
    Distance d1;
    d1.accept();
    cout << "\nDistance before Operator overloading";
    d1.display();
    -d1;
    cout << "\nDistance after Operator Overloading";
    d1.display();
    return 0;
}