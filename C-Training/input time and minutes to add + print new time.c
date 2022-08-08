#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>
typedef struct
{
    int hour;
    int minutes;
}time_t;

time_t addMinutes(time_t t, int toAdd)
{
    time_t newClock;
    newClock.minutes = t.minutes + toAdd;
    newClock.hour = (t.hour) + (newClock.minutes / 60);
    newClock.minutes %= 60;
    newClock.hour %= 24;
    return newClock;
}

void printClock(time_t t)
{
    printf("%d : %d", t.hour, t.minutes);
}
void main()
{
    time_t  t1;
    int toAdd;
    printf("enter time (hour:minutes) - ");
    scanf("%d : %d", &t1.hour, &t1.minutes);
    printf("how many minutes to add: ");
    scanf("%d", &toAdd);
    time_t t2 = addMinutes(t1, toAdd);
    printClock(t2);
}
