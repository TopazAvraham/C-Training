#pragma warning (disable: 4996)
#include <stdio.h>
#include <math.h>
#define COLS 4

int isFrame1(int[][COLS], int);

void main()
{
	int mat[4][COLS] = { {1,1,1,1},{1,2,2,1},{1,3,5,1},{2,1,1,1} };

	int res = isFrame1(mat, 4);
	if (res == 1)
	{
		printf("the frame is 1");
	}
	else {
		printf("the frame is not all 1");
	}
}

int isFrame1(int mat[][COLS], int rows) {

	int i;

	for (i = 0; i < COLS; i++)
	{
		if (mat[0][i] != 1)
		{
			return 0;
		}
	}

	for (i = 0; i < COLS; i++)
	{
		if (mat[rows - 1][i] != 1)
		{
			return 0;
		}
	}

	for (i = 1; i < rows - 1; i++)
	{
		if (mat[i][COLS - 1] != 1)
		{
			return 0;
		}
	}

	for (i = 1; i < rows - 1; i++)
	{
		if (mat[i][0] != 1)
		{
			return 0;
		}
	}

	return 1;
}
