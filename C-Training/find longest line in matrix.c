#pragma warning (disable: 4996)
#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j;
	char mat[3][81];
	int max_length = 0, max_row;

	for (i = 0; i < 3; i++)
	{
		printf("please enter line %d:", i + 1);
		gets(mat[i]);
	}

	for (i = 1; i < 3; i++)
	{
		if (strlen(mat[i]) > max_length)
		{
			max_length = strlen(mat[i]);
			max_row = i;
		}
	}

	printf("the max line is %d, and her len is %d", max_row + 1, max_length);
}

