#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>
#define SIZE 4
void sortMatrix(int mat[][SIZE])
{
    int i = 0, j = 0;
    int temp;

    for (i = SIZE - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (mat[j][j] > mat[j + 1][j + 1])
            {
                temp = mat[j][j];
                mat[j][j] = mat[j + 1][j + 1];
                mat[j + 1][j + 1] = temp;
            }
        }
    }

}
void main() {
    int mat[SIZE][SIZE] =
    {
        {9,3,6,5} , {2,4,8,2},{7,2,2,1}, {9,8,3,6}
    };

    sortMatrix(mat);

    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

}
