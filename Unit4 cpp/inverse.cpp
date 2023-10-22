// 4.4 Define a member function which will find inverse of 
// matrix. Consider all the possibilities

#include <stdio.h>
#include <iostream>
using namespace std;

class Inverse
{
public:
    float detr(float a1[10][10], int k)
    {
        float d = 0, b[10][10];
        int i, j, m, n, c, s = 1;
        if (k == 1)
            return (a1[0][0]);
        for (c = 0; c < k; c++)
        {
            m = 0;
            n = 0;
            for (i = 0; i < k; i++)
                for (j = 0; j < k; j++)
                {
                    if (i != 0 && j != c)
                    {

                        b[m][n] = a1[i][j];
                        n++;
                        if (n == k - 1)
                        {
                            n = 0;
                            m++;
                        }
                    }
                }
            d = d + s * (a1[0][c] * detr(b, k - 1));
            s = -s;
        }
        return (d);
    }
    /* function define find co-factor */
    void cofactor(float x[10][10], int k)
    {
        float b[10][10], y[10][10];
        int p, q, m, n, i, j, s = 1;
        for (q = 0; q < k; q++)
            for (p = 0; p < k; p++)
            {
                m = 0;
                n = 0;
                for (i = 0; i < k; i++)
                    for (j = 0; j < k; j++)
                        if (i != q && j != p)
                        {
                            b[m][n] = x[i][j];
                            if (n < (k - 2))
                                n++;
                            else
                            {
                                n = 0;
                                m++;
                            }
                        }

                y[q][p] = s * detr(b, k - 1);
                s = -1 * s;
            }
        transpose(x, y, k);
    }

    /*Finding transpose of matrix*/
    void transpose(float x[10][10], float y[10][10], int r)
    {
        int i, j;
        float b[10][10], inv[10][10], d;
        printf("The cofactor of matrix is:\n");
        display(y, r);
        /* transpose of cofactor matrix */
        for (i = 0; i < r; i++)
            for (j = 0; j < r; j++)
                b[i][j] = y[j][i];

        d = detr(x, r);
        printf("The adjoin matrix is:\n");
        display(b, r);
        /* calculate inverse matrix */
        for (i = 0; i < r; i++)
            for (j = 0; j < r; j++)
                inv[i][j] = b[i][j] / d;

        printf("The inverse of matrix is:\n");
        display(inv, r);
    }
    /* display function definition */
    void display(float m[][10], int o)
    {
        int i, j;
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < o; j++)
                printf("%8.2f", m[i][j]);
            printf("\n");
        }
    }
};

int main()
{
    Inverse I;
    float a[10][10], d;
    int i, j, k;
    printf("Enter the order of the Matrix : ");
    scanf("%d", &k);
    printf("Enter the row by row values of %dX%d Matrix:\n", k, k);
    for (i = 0; i < k; i++)
        for (j = 0; j < k; j++)
            scanf("%f", &a[i][j]);
    printf("The given matrix is:\n");
    I.display(a, k);
    d = I.detr(a, k);
    printf("The determinat of matrix is: %.2f \n", d);
    if (d == 0)
        printf("Inverse of Matrix is not possible\n");
    else
        I.cofactor(a, k);
    return 0;
}
