#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>
#include <time.h>
#define COLS 5
#define ROWS 4

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printMatrix(int mat[][COLS], int rows)
{
	int i, j;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf(" %d", mat[i][j]);
		}
		printf("\n");
	}
}
void sortCol(int mat[][COLS], int rows, int colToSort)
{
	int i, j;
	for (i = rows - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (mat[j][colToSort] > mat[j + 1][colToSort])
			{
				swap(&mat[j][colToSort], &mat[j + 1][colToSort]);
			}
		}
	}
}

int binarySearchInCol(int mat[][COLS], int rows, int lookFor, int colToSearch)
{
	int low = 0, high = rows - 1, middle;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (lookFor == mat[middle][colToSearch])
		{
			return middle;
		}
		else  if (lookFor < mat[middle][colToSearch])
		{
			low = high - 1;
		}
		else
		{
			low = middle - 1;
		}
		return -1;
	}
}

void searchInSortedMatrix(int mat[][COLS], int rows, int lookFor, int* foundRow, int* foundCol)
{
	int i;
	*foundCol = *foundRow = -1;
	for (i = 0; i < COLS; i++)
	{
		int found = binarySearchInCol(mat, rows, lookFor, i);
		if (found != -1) {
			*foundRow = found;
			*foundCol = i;
			return;
		}
	}
}
void main()
{
	srand(time(NULL));
	int mat[ROWS][COLS];
	int i, j;
	int foundRow, foundCol;
	int value = 12;

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			mat[i][j] = rand() % 20;
		}
	}

	printMatrix(mat, ROWS);

	for (i = 0; i < COLS; i++)
	{
		sortCol(mat, ROWS, i);
	}
	printMatrix(mat, ROWS);
	searchInSortedMatrix(mat, ROWS, value, &foundRow, &foundCol);
	if (foundCol != -1)
	{
		printf("the value is in ROW %d, and col %d", foundRow, foundCol);
	}
	else
	{
		printf("the value is not in the mat");
	}
}
