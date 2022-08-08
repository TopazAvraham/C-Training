#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

int findMax(int* arr, int n)
{
	if (n == 1)
	{
		return arr[0];
	}

	if (arr[n - 1] > findMax(arr, n - 1))
	{
		return arr[n - 1];
	}
	else
	{
		return findMax(arr, n - 1);
	}
}

void main()
{
	int arr[] = { 91,2,90,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int res = findMax(arr, size);

	printf("%d", res);
}
