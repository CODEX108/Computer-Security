#include <stdio.h>

int main()
{
    int arr[50] = {78, 23, 55, 45, 56, 33};
    int i, min, max, n, key = 35, loc = 2, del = 4;
    min = arr[0];
    max = arr[0];
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("\n Size of the array is :%d\t\n", length);
    printf("\nElements in the array\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (i = 1; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        // printf("\n");
        if (arr[i] > max)
        {
            max = arr[i];
        }

        // printf("\n");
    }
    printf("\nMaximum number from the array : %d\n", max);
    printf("Minmum number from the array: %d\n", min);

    for (i = 6 - 1; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
    printf("\n***** Insertion of array *****\n");
    for (i = 0; i <= 6; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf ("\n");
    for (i = del - 1; i <= 6 - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    length--;

    printf("\n***** deletion of array *****\n\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}