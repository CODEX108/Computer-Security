#include <stdio.h>

int sumOfSquares(int a, int b);

int main()
{
    int x, y, results;
    printf("Enter the first number");
    scanf("%d", &x);
    printf("Enter the second number");
    scanf("%d", &y);
    results = sumOfSquares(x, y);
    printf("The result= %d", results);
    return 0;
}

sumOfSquares(int a, int b)
{
    return a * a + b * b;
}