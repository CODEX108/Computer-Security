#include <stdio.h>

#define pi 3.141592653589793238

double sin(double theta)
{
    long k = 0;
    long double sum = 0.0;
    long double tolerance = 0.0000001;
    long double term = 0.0;

    do
    {
        term = power(-1, k) * power(theta, 2 * k + 1) / factorialLoop(2 * k + 1);
        sum += term;
        k++;

        printf ("k=%lu\t term=%llf\tsum=%llf",k,term,sum);

    } while (term > tolerance);

    return sum;
}

int main()
{
    long double theta, result;

    printf("Enter theta");
    scanf("%Lf", &theta);

    result = sin(theta);
    printf("result=%Lf", result);

    double degreetoradians(double theta)
    {
        return theta * pi / 180;
    }

    return 0;
}