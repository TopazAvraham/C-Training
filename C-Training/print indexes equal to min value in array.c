#pragma warning (disable: 4996)
#include <stdio.h>

typedef int Arr[10];

void main()
{
	int counter = 0;
	Arr nums = { 1,2,3,4,1,2,3,4,4,5 };
	int i, min = nums[0], minIndex = 0;

	for (i = 1; i < 10; i++)
	{
		if (nums[i] < min)
		{
			min = nums[i];
		}
	}

	printf("min value is: %d\n", min);
	printf("indexes are: \n");

	for (i = 0; i < 10; i++)
	{
		if (nums[i] == min)
		{
			counter++;
			printf("%d,", i);
		}
	}
	printf("the index appears %d times", counter);
}
