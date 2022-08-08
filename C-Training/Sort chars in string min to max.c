#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>
#define SIZE 4
char getSmallLetter(char ch);

void swapChar(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void setLettersInWord(char* str)
{
	int i, j, minIndex;
	int size = strlen(str);
	for (i = 0; i < size; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (getSmallLetter(str[j]) < getSmallLetter(str[minIndex]))
			{
				minIndex = j;
			}
		}
		swapChar(&str[i], &str[minIndex]);
	}
}
char getSmallLetter(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		ch += 'a' - 'A';
		return ch;
	}
	return ch;
}

void main()
{
	char str[] = "azgA";
	setLettersInWord(str);
	puts(str);
}
