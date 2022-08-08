#pragma warning (disable: 4996)
#include <stdio.h>

int* findMaxAddress(int arr[], int size)
{

	int i;
	int	maxindex = 0;
	for (i = 1; i < size; i++)
	{
		if (arr[maxindex] < arr[i])
		{
			maxindex = i;
		}
	}
	return &arr[maxindex];
}

void main()
{
	int arr[] = { 2,-5,8 };
	int* maxElementAddress = findMaxAddress(arr, sizeof(arr) / sizeof(arr[0]));

	printf("max address  is %p", maxElementAddress);
	printf(" 8 address is %p", &arr[2]);
}
