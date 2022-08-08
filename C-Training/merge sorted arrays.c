#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>
#define LEN 10
void sortArrays(const char text1[][LEN], int lines1, const char text2[][LEN], int lines2, char text3[][LEN])
{
    int i = 0, j = 0;
    while (lines1 > i && lines2 > j)
    {
        if (strcmp(text1[i], text2[j]) <= 0)
        {
            strcpy(text3[i + j], text1[i]);
            i++;
        }
        else
        {
            strcpy(text3[i + j], text2[j]);
            j++;
        }
    }
    while (lines1 > i)
    {
        strcpy(text3[i + j], text1[i]);
        i++;
    }
    while (lines2 > j)
    {
        strcpy(text3[i + j], text2[j]);
        j++;
    }
}
void main() {
    char text3[5][LEN];
    char text1[3][LEN] = { "amon" , "call", "data" };
    char text2[2][LEN] = { "beta" , "teta" };
    int lines1 = 3;
    int lines2 = 2;
    sortArrays(text1, lines1, text2, lines2, text3);
    int i;


    for (i = 0; i < 5; i++)
    {
        puts(text3[i]);
    }



}
