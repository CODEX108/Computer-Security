#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first  number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("The difference between two numbers is:\n%d-%d=%d", a, b, a - b);
    }
    else
        printf("The difference between two numbers is:\n%d-%d=%d", b, a, b - a);
    return 0;
}