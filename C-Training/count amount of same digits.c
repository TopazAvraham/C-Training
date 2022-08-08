#pragma warning (disable: 4996)
#include <stdio.h>
#include <math.h>

int countSameDigits(int num1, int num2)
{
	int count = 0;
	while (num1 > 0 && num2 > 0)
	{
		if (num1 % 10 == num2 % 10)
		{
			count++;
		}
		num1 /= 10;
		num2 /= 10;
	}
	if (num1 > 0 || num2 > 0)
	{
		return -1;
	}
	else
	{
		return count;
	}
}

void main()
{
	int num1, num2;
	printf("enter 2 nums: ");
	scanf("%d %d", &num1, &num2);

	int res = countSameDigits(num1, num2);

	if (res == -1) {
		printf("not same length");
	}
	else {
		printf("there are %d same digits", res);
	}
}
