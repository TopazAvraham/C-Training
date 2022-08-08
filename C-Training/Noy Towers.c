#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>


void hanoi(int n, char A, char B, char C)
{
	if (n == 0)
	{
		return;
	}
	hanoi(n - 1, A, C, B);
	printf("move disc %d from %c to %c\n", n, A, B);
	hanoi(n - 1, C, B, A);
}


void main()
{
	int discs;
	printf("how many discs: ");
	scanf("%d", &discs);
	hanoi(discs, 'A', 'B', 'C');
}
