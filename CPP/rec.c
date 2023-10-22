#include <stdio.h>
long factorial(long n);
int main()
{
    long n, res;
    printf("Enter the number you want the factorial of:");
    scanf("%ld", &n);
    res = factorial(n);
    printf("%ld", res);
    return 0;
}
 long factorial(long n)
{
    long res;
    if (n == 0)
    {
        res= 1;
    }
    else
    {
        res=n*factorial(n - 1);
    }
    return res;
}