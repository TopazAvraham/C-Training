#pragma warning (disable: 4996)
#include <stdio.h>
#include <math.h>

int checkDigit(int arr[], int size, int digit);
int digitExist(int num, int digit);
void main()
{
	int nums[] = { 123,456,817,991 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int digit, res;

	printf("enter digit: ");
	scanf("%d", &digit);

	res = checkDigit(nums, size, digit);

	printf("the digits appers in %d elements", res);
}

int checkDigit(int arr[], int size, int digit) {

	int i, counter = 0;

	for (i = 0; i < size; i++)
	{
		if ((digitExist(arr[i], digit)) == 1)
			counter++;
	}
	return counter;
}

int digitExist(int num, int digit) {
	while (num > 0) {
		if (num % 10 == digit)
		{
			return 1;
		}
		num /= 10;
	}
	return 0;
}
