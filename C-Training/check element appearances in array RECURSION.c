#include <stdio.h>
int checkAppearances(int* arr, int size, int num)
{
    if (size == 0)
    {
        return 0;
    }
    if (arr[size - 1] == num)
    {
        return checkAppearances(arr, size - 1, num) + 1;
    }
    else {
        return checkAppearances(arr, size - 1, num);
    }
}
void main()
{
    int arr[] = { 3,4,5,6,7,3,3,2,1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = checkAppearances(arr, size, 3);
    printf("%d", res);
}
