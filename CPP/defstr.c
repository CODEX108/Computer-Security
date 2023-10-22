//2.4 Define a struct LineSegment having two members of type 
// strut Point (say p1 and p2)


#include <stdio.h>

struct Point
{
  double x;
  double y;
};

struct LineSegment
{
  struct Point p1;
  struct Point p2;
};

int main()
{
   struct LineSegment l1;
  l1.p1.x = 3;
  l1.p1.y = 5;

  l1.p2.x = 8;
  l1.p2.y = 11;
  
  return 0;
}