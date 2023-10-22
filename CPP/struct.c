//2.1 Define a struct Point with two double members (say x and 
// y)

#include <stdio.h>

struct Point
{
    double x;
    double y;
};

int main()
{
    struct Point p1;
    p1.x=5;
    p1.y=6;
    printf("%f and %f", p1.x, p1.y);
    return 0;
}