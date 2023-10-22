#include <stdio.h>
long fact(long );

int main()
{
    long x, N;
    printf("Enter a number: ");
    scanf("%ld", &N);
    x = fact(N);
    printf("Factorial is : %ld", x);
    return 0;
}
long fact(long n)
{
    long i, f = 1;
    for (i = 1; i<= n;i++)
    {
        f = f * i;
    }
        return (f);
    
}