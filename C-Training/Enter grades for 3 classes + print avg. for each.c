#pragma warning (disable: 4996)
#include <stdio.h>

#define Num_Classes 3
#define students_in_class 5

void main()
{
	int grades[Num_Classes][students_in_class];
	int i, j;



	for (i = 0; i < Num_Classes; i++)
	{
		printf("for class number: %d\n", i + 1);
		for (j = 0; j < students_in_class; j++)
		{
			printf("enter grades for student number %d: ", j + 1);
			scanf("%d", &grades[i][j]);
		}
	}

	int avg[3];
	for (i = 0; i < Num_Classes; i++)
	{
		int my_sum = 0;
		for (j = 0; j < students_in_class; j++)
		{
			my_sum += grades[i][j];
		}
		avg[i] = my_sum / 5;
	}


	for (i = 0; i < Num_Classes; i++)
	{
		printf("the avg of class %d is: %d\n", i + 1, avg[i]);
	}
}
