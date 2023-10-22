#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("How many numbers do you want to add?\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        printf("Enter the %dth number: ", i + 1);
        scanf("%d", &t);
        sum += t;
    }
    printf("The sum is:%d", sum);
    return 0;
}
