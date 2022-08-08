#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

int sumArray(int* arr, int n)
{
	if (n == 0)
	{
		return 0;
	}

	return sumArray(arr, n - 1) + arr[n - 1];
}

void main()
{
	int arr[] = { 1,2,90,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int res = sumArray(arr, size);

	printf("%d", res);
}
