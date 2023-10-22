#include <stdio.h>
#include <math.h>

int factorial(int n)             //this func finds fact with the help of recursion
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
        
    return fact;
}

int main()
{
    double x, sum = 0, z, term;
    int n, i, sign = -1;        //here sign is assigned -ve to bring alternate signs in the working of the formula

    printf("\nEnter the value for x : "); //Example 45 180 90 360
    scanf("%lf", &x);
    printf("\nEnter the value for n : "); //Example 10 20
    scanf("%d", &n);

    x = x * 3.14159 / 180; //converting degree to radian
    i = 0;
    z = sin(x);

    for (i = 1; i <= n; i = i + 2)
    {
        sign = -sign;
        term = sign * pow(x, i) / factorial(i);    
        sum = sum + term;
       
    }

    printf("\nsin(x) is approximately %.15lf\n", sum);
    printf("\nsin(x) by default function is %.15lf\n", z);

    return 0;
}