#include <stdio.h>

int main()
{
    int n, temp, i, j, A[50], flag;

    printf("How many elements do you to enter ?: ");
    scanf("%d", &n);

    printf("\nEnter %d numbers: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag==0)
        break;
    }

    printf("\n-----------------------------------------------------------\n");
    printf(" The array after using the bubble sort technique is :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }
    return 0;
}