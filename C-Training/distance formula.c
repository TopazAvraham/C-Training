#pragma warning (disable: 4996)
#include <stdio.h>
#include <math.h>

int power(int, int);
float distance(int, int, int, int);



void main()
{
	int x1, x2, y1, y2;
	printf("enter 2 points (x1,x2),(y1,y2): ");
	scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
	float dist = distance(x1, x2, y1, y2);
	printf("the result is %lf", dist);
}

int power(int base, int exponent) {
	int i, result = 1;
	for (i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}

float distance(int x1, int x2, int y1, int y2) {
	float xDiffer, yDiffer;
	float res;


	xDiffer = power(x2 - x1, 2);
	yDiffer = power(y2 - y1, 2);

	res = sqrt(xDiffer + yDiffer);
	return res;
}
