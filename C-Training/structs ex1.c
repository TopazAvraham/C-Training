#pragma warning (disable: 4996)
#include <stdio.h>

struct point
{
	int x, y;
} typedef point_t;

struct square
{
	point_t topLeftPoint, buttomRightPoint;
}typedef square_t;

void printPoint(const point_t* p)
{
	printf("(%d,%d)", p->x, p->y);
}

void printSquare(const square_t* s)
{
	printPoint(&s->topLeftPoint);
	printPoint(&s->buttomRightPoint);
}

void readPoint(point_t* p)
{
	scanf("%d %d", &p->x, &p->y);
}

void readSquare(square_t* s)
{
	printf("enter top left point: ");
	readPoint(&s->topLeftPoint);
	printf("enter buttom right point: ");
	readPoint(&s->buttomRightPoint);
}


void main()
{
	square_t s1 = { {0,0}, {3,4} };
	square_t s3, s4, s5;
	readSquare(&s3);
	readSquare(&s4);
	readSquare(&s5);

	printf("%d", s4.topLeftPoint.x);


}
