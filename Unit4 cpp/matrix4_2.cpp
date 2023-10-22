// 4.2 Create a class Matrix with size 3 x 3 for floating point data. 
// Declare a member function inside the class which will find 
// transpose of the matrix.

#include <iostream>
using namespace std;

class Matrix
{
public:
    float temp[3][3];

    void Transpose(float matrix[3][3])
    {
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                temp[j][i] = matrix[i][j];

        cout << ">>------------------Transpose of the matrix------------------<<\n";

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
             printf("%f\t",temp[i][j]);
            cout << "\n";
        }
    }
};

int main()
{
    Matrix mat;
    int a, b;
    float matrix[3][3];
    cout << ">>------------------Enter elements of the 3X3 matrix is------------------<<\n";
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            cin >> matrix[a][b];
    mat.Transpose(matrix);
}