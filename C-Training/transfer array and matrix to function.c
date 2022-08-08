#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

#define SIZE 3
void printMatrix(int mat[][SIZE], int rows);
void printArr(int* arr, int size);
int getMax(int* arr, int size);

void main()
{
	int i, mat[SIZE][SIZE] = { {1,2,3}, {4,5,6}, {8,2,3} };
	printMatrix(mat, SIZE);
	printf("matrix as arr: ");
	printArr((int*)mat, SIZE * SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("\nthe max in line% d is %d\n", i + 1, getMax(mat[i], SIZE));
	}
	printf("\nthe max in all matrix is %d\n", getMax(mat, SIZE * SIZE));
}

void printMatrix(int mat[][SIZE], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
}
void printArr(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
}

int getMax(int* arr, int size)
{
	int i, max = arr[0];
	for (i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
