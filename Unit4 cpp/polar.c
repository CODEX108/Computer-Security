#include <stdio.h>
#include <string.h>
#include<math.h>
main()
{
    double x,y,z;
    x=7;
    y=5;
    z=y;
    
    //If "-" Operator
    y=-1*y;
        
    double r=sqrt(x*x+y*y);
    double t=atan(y/x);
    t=t*180/3.14;
    r=round(r*1000)/1000;
    t=ceil(t);
    printf("Polar representation (z): %.0f ( cos %0.f (deg) + i sin %.0f (deg))",r,t,t);
        
    //If "+" Operator
    z=z*1;
    r=sqrt(x*x+z*z);
    t=atan(z/x);
    t=t*180/3.14;
    r=round(r*1000)/1000;
    t=ceil(t);
    printf("Polar representation (z): %.0f ( cos %0.f (deg) + i sin %.0f (deg))",r,t,t);
    return 0;
}