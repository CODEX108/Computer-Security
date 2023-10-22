#include <stdio.h>
int main()
{
    int a[50], i, j, temp, n;
    printf("How many elements do you want?: ");
    scanf("%d", &n);
    printf("Enter the %d elemens: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\n-----------------------------------------------------------\n");
    printf(" The sorted array after using the insertion sort technique is :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}