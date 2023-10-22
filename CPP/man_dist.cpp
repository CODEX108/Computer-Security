#include <iostream>
using namespace std;

class Distance
{
private:
    int inches, feet;

public:
    void get_data()
    {
        cout << "Enter distance in inches: ";
        cin >> inches;
        cout << "Enter distance in feet: ";
        cin >> feet;
    }

    void set_Data()
    {
        cout << "\nInches:- " << inches << endl;
        cout << "\nFeet:- " << feet << endl;
    }

    void operator-()
    {
       
        inches--;
    }
};

int main()
{
    Distance d1;
    d1.get_data();
    cout << "\nDistance before Operator overloading";
    d1.set_Data();
    -d1;
    cout << "\nDistance after Operator Overloading";
    d1.set_Data();
    return 0;
}