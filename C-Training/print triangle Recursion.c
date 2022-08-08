#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

void printTriangle(int n)
{
	if (n == 0)
	{
		return;
	}
	int i;
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");

	printTriangle(n - 1);
}

void main()
{
	int base;
	printf("enter base: ");
	scanf("%d", &base);
	printTriangle(base);
}
