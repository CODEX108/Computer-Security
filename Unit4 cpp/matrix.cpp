#include <stdio.h>

int main()
{
    int m, n, i, j, matrix[10][10], temp[10][10];

    printf("Enter the number of rows and columns of a matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            temp[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t", temp[i][j]);
        printf("\n");
    }

    return 0;
}