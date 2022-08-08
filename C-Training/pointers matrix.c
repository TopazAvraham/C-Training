#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

#define ROWS 4
#define COLS 5

void readArray(int* arr, int numberOfNums)
{
	int* ptr;
	int counter = 0;
	for (ptr = arr; ptr < arr + numberOfNums; ptr++)
	{
		printf("enter num %d: ", counter + 1);
		counter++;
		scanf("%d", &(*ptr));
	}
}
void printfReverse(int* arr, int numberOfNums)
{
	int* ptr;

	for (ptr = arr + numberOfNums - 1; ptr >= arr; ptr--)
	{
		printf("%d", *ptr);
	}
	printf("\n");
}
void main()
{
	int mat[ROWS][COLS];

	int i;
	for (i = 0; i < ROWS; i++)
	{
		readArray(mat[i], COLS);
	}

	printfReverse((int*)mat, (ROWS * COLS) / 2);
	printfReverse(mat + (ROWS * COLS) / 2, 1);



}
