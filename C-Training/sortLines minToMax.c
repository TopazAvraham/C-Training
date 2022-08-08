#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>


void swap(char* a, char* b)
{
    char temp[30];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sortAscending(char text[][30], int lines)
{
    int i, j;
    for (i = lines - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if ((strcmp(text[j], text[j + 1])) > 0)
            {
                swap(text[j], text[j + 1]);
            }
        }
    }
}

int main() {
    char text[5][30];
    printf("please enter 5 lines: ");
    int i;
    for (i = 0; i < 5; i++)
    {
        gets(text[i]);
    }
    sortAscending(text, 5);
    for (i = 0; i < 5; i++)
    {
        puts(text[i]);
    }

    return 0;
}
