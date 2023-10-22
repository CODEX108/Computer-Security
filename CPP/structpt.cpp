// 2.2 Define a struct Circle with a member of type struct Point
// as center and a double member radius.

#include <iostream>
using namespace std;

struct Point // type struct Point as center

{
  int centre_x;
  int centre_y;
};

struct Circle
{
  struct Point p;
  double radius;
};

int main()
{
  Circle c;
  cout << "Enter the radius of the circle" << endl;
  cin >> c.radius;
  cout << "Enter the x co-ordinate of the center of the circle" << endl;
  cin >> c.p.centre_x;
  cout << "Enter the y co-ordinate of the center of the circle" << endl;
  cin >> c.p.centre_y;
  cout << "The radius of the circle is: " << c.radius << endl;
  cout << "The x co-ordinate of the center of the circle is: " << c.p.centre_x << endl;
  cout << "The y co-ordinate of the center of the circle is: " << c.p.centre_y << endl;
  return 0;
}
