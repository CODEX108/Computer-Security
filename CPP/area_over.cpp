#include <iostream>
using namespace std;
#define PI 3.14

class Areaofshapes
{
public:
    void Area(float var1, float var2) //function with 2 parameters
    {
        cout << "Area of the rectangle is " << var1 * var2 << endl;
    }

    void Area(float var3) //functions with single parameters
    {
        cout << "Area of the circle is " << PI * var3 * var3 << endl;
    }
};

int main()
{
    Areaofshapes a;
    float length;
    float breadth;
    float radius;
    length = 10;
    breadth = 20;
    radius = 6;
    a.Area(length, breadth);
    a.Area(radius);
    return 0;
}


