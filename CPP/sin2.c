#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793238
int main()
{
    int i,n,degree;
    float x,sum=0,num,term,m;
    printf ("Enter the value in degree\n");
    scanf ("%d",&degree);

    x=(degree*pi)/180;
    num=x;
    i=2;
    m=1;

    do
    {
        term=num/m;
        sum=sum+term;
        num=-num*x*x;
        m=m*i*(i+1);
        i=i+2;
    }while (fabs (term)>=0.0000000000001);
    printf ("the result of sin(x)=%f\n",sum);
    return 0;
}