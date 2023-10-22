// 2.5 Write a function which will take two arguments of type 
// struct LineSegment and will return 1 if the two line 
// segments are intersecting and return 0 otherwise

#include<stdio.h>

struct Point
{
	double x;
	double y;
};
struct LineSeg
{
    struct Point p1;
    struct Point p2;
};
double maximum(double a, double b)
{
	if(a>=b)
	      return a;
	return b;
}
double minimum(double a, double b)
{
	if(a<=b)
	       return a;
	return b;
}
int isOnSeg(struct Point a, struct Point check, struct Point b)
{
	if(check.x <= maximum(a.x, b.x) && check.x >= minimum(a.x, b.x) && check.y <= maximum(a.y, b.y) && check.y >= minimum(a.y, b.y))
	        return 1;
}
int findOrientation(struct Point a, struct Point b, struct Point check)
{
	double result = (b.y - a.y) * (check.x - b.x) - (b.x - a.x) * (check.y - b.y);
	if(result > 0)
	        return 1;
	if(result < 0)	
	        return -1;
	return 0;
}
int doesIntersect(struct LineSeg L1, struct LineSeg L2)
{
	int o1 = findOrientation(L2.p1, L2.p2, L1.p1);
	int o2 = findOrientation(L1.p1, L2.p2, L1.p2);
	int o3 = findOrientation(L1.p1, L1.p2, L2.p1);
	int o4 = findOrientation(L1.p1, L1.p2, L2.p2);
	
	if(o1 != o2 && o3 != o4)
	    return 1;
	if(o1 == 0 && isOnSeg(L2.p1, L1.p1, L2.p2))
	    return 1;
	if(o2 == 0 && isOnSeg(L2.p1, L1.p2, L2.p2))
	    return 1;
	if(o3 == 0 && isOnSeg(L1.p1, L2.p1, L1.p2))
	    return 1;
	if(o4 == 0 && isOnSeg(L1.p1, L2.p2, L1.p2))
	    return 1;
	    
	return 0;
}

int main()
{
    struct LineSeg l1;
    struct LineSeg l2;
    printf("For First Line : \n");
    printf("Enter x co-ordinate of First Point: ");
    scanf("%lf", &l1.p1.x);
    printf("Enter y co-ordinate of First Point: ");
    scanf("%lf", &l1.p1.y);
     printf("Enter x co-ordinate of Second Point: ");
    scanf("%lf", &l1.p2.x);
     printf("Enter y co-ordinate of Second Point: ");
    scanf("%lf", &l1.p2.y);
    
    printf("For Second Line : \n");
    printf("Enter x co-ordinate of First Point: ");
    scanf("%lf", &l2.p1.x);
    printf("Enter y co-ordinate of First Point: ");
    scanf("%lf", &l2.p1.y);
     printf("Enter x co-ordinate of Second Point: ");
    scanf("%lf", &l2.p2.x);
     printf("Enter y co-ordinate of Second Point: ");
    scanf("%lf", &l2.p2.y);

    if(doesIntersect(l1, l2))
        printf("Line Intersect \n");
    else
        printf("Not Intersecting \n");
    return 0;
}
