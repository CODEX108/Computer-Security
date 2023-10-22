#include <stdio.h>

double product (double x,double n)
{
    double product = 1.0;
    int i=n;
    while (i!=0)
    {
        product*=x;
        i--;
    }
   return product; 
}

int main()
{
double x,n,result;
printf ("Enter the base:");
scanf ("%lf",&x);
printf ("Enter the exponent:");
scanf ("%lf",&n);
result= product (x,n);
printf ("result= %lf",result);
return 0;
}