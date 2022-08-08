#pragma warning (disable: 4996)
#include <stdio.h>

void main()
{
	int i, j, mat[4][5];

	for (i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			printf("enter nums for row %d: \n", i + 1);
			for (j = 0; j < 5; j++)
			{
				printf("enter num %d: ", j + 1);
				scanf("%d", &mat[i][j]);
			}
		}

		else
		{
			printf("enter nums for row %d\n", i + 1);
			for (j = 4; j >= 0; j--)
			{
				printf("enter num %d: ", j + 1);
				scanf("%d", &mat[i][j]);
			}

		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", mat[i][j]);
		}
		printf("\n");
	}



}

