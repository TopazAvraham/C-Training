#pragma warning (disable: 4996)
#include <stdio.h>

void main()
{
	int i, j, num, current_count, maxColIndex, MaxColCount = 0;
	int mat[3][5] = { {3,4,4,5,6}, {2,8,7,5,3}, {9,2,1,3,5} };

	printf("enter num: ");
	scanf("%d", &num);

	for (i = 0; i < 5; i++)
	{
		current_count = 0;
		for (j = 0; j < 3; j++)
		{
			if (mat[j][i] == num)
			{
				current_count++;
			}
		}

		if (current_count > MaxColCount)
		{
			MaxColCount = current_count;
			maxColIndex = i;
		}
	}

	printf("the col that %d appears most is: %d, %d times", num, maxColIndex, MaxColCount);

}

